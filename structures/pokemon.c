#include<stdio.h>
int main(){
    struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;   //G S A B C D
    } pikachu, charizard;
    struct legendary_pokemon
    {
        int spAtt;
        struct pokemon;
        
    };
    
    // struct pokemon pikachu;
    // //pikachu.attack=60;
    // printf("pika atack");
    // scanf("%d",&pikachu.attack);
    // pikachu.hp=50;
    // pikachu.speed=100;
    // pikachu.tier='A';

    // struct pokemon charizard;
    // charizard.attack=150;
    // charizard.hp=90;
    // charizard.speed=50;
    // charizard.tier='S';

    // printf("%d", charizard.attack);

    //pikachu.attack=60;
    printf("pika atack");
    scanf("%d",&pikachu.attack);
    pikachu.hp=50;
    pikachu.speed=100;
    pikachu.tier='A';

   
    charizard.attack=150;
    charizard.hp=90;
    charizard.speed=50;
    charizard.tier='S';

    printf("%d", charizard.attack);



}
//nested struct for legendary pokemon xcuz + spl attack
//but struct k andar struct nooo until its a complete struct