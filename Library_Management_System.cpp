#include <bits/stdc++.h>

using namespace std;

class Book {
public:
    string title;
    string author;
    int id;

    // Constructor
    Book(string t, string a, int i) : title(t), author(a), id(i) {}
};

// Library class to manage books and users
class Library {
private:
    vector<Book> books;
    string filename;  // File to store data

public:
    // Constructor with a filename for data persistence
    Library(string file) : filename(file) {
        loadLibraryData();  // Load data from file when the Library is created
    }

    // Destructor to save data to file when the program exits
    ~Library() {
        saveLibraryData();
    }

    // Function to add a new book
    void addBook(string title, string author, int id) {
        auto it = find_if(books.begin(), books.end(), [id](const Book& b) { return b.id == id; });
        if (it != books.end()) {
            cout << "Book with this ID already exists.\n";
            return;
        }
        books.push_back(Book(title, author, id));
        cout << "Book added successfully!\n";
    }

    // Function to remove a book by ID
    void removeBook(int id) {
        auto it = find_if(books.begin(), books.end(), [id](const Book& b) { return b.id == id; });
        if (it != books.end()) {
            books.erase(it);
            cout << "Book removed successfully!\n";
        } else {
            cout << "Book not found.\n";
        }
    }

    // Function to search for a book by title or author
    void searchBook(string query) {
        transform(query.begin(), query.end(), query.begin(), ::tolower);
        cout << "Search results:\n";
        for (const auto& book : books) {
            string lowerTitle = book.title;
            string lowerAuthor = book.author;
            transform(lowerTitle.begin(), lowerTitle.end(), lowerTitle.begin(), ::tolower);
            transform(lowerAuthor.begin(), lowerAuthor.end(), lowerAuthor.begin(), ::tolower);
            if (lowerTitle.find(query) != string::npos || lowerAuthor.find(query) != string::npos) {
                cout << "ID: " << book.id << ", Title: " << book.title << ", Author: " << book.author << "\n";
            }
        }
    }

    // Function to display all books
    void displayBooks() {
        cout << "All books:\n";
        for (const auto& book : books) {
            cout << "ID: " << book.id << ", Title: " << book.title << ", Author: " << book.author << "\n";
        }
    }

private:
    // Function to save library data to a file
    void saveLibraryData() {
        ofstream file(filename);
        if (file.is_open()) {
            for (const auto& book : books) {
                file << book.title << ',' << book.author << ',' << book.id << '\n';
            }
            file.close();
        } else {
            cout << "Error opening file for writing.\n";
        }
    }

    // Function to load library data from a file
    void loadLibraryData() {
        ifstream file(filename);
        if (file.is_open()) {
            books.clear();  // Clear existing data before loading
            string line;
            while (getline(file, line)) {
                stringstream ss(line);
                string title, author;
                int id;
                getline(ss, title, ',');
                getline(ss, author, ',');
                ss >> id;
                books.push_back(Book(title, author, id));
            }
            file.close();
        } else {
            cout << "No existing data or error opening file for reading.\n";
        }
    }
};

int main() {
    Library library("library_data.csv");  // Specify a filename for storing data
    int choice;
    cout << "\nLibrary Management System\n";
    cout << "1. Add Book\n";
    cout << "2. Remove Book\n";
    cout << "3. Search for Book\n";
    cout << "4. Display All Books\n";
    cout << "5. Exit\n";
    do {
        
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                {
                    string title, author;
                    int id;
                    cout << "Enter book title: ";
                    cin.ignore();
                    getline(cin, title);
                    cout << "Enter book author: ";
                    getline(cin, author);
                    cout << "Enter book ID: ";
                    cin >> id;
                    library.addBook(title, author, id);
                }
                break;
            case 2:
                {
                    int id;
                    cout << "Enter book ID to remove: ";
                    cin >> id;
                    library.removeBook(id);
                }
                break;
            case 3:
                {
                    string query;
                    cout << "Enter search query (title or author): ";
                    cin.ignore();
                    getline(cin, query);
                    library.searchBook(query);
                }
                break;
            case 4:
                library.displayBooks();
                break;
            case 5:
                cout << "Exiting the program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}