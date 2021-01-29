#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int snakeWaterGun(char you, char computer){
    // returns 1 if you win, -1 if you lose and 0 if draw
   
    if(you == computer){
        return 0;
    }

    

    if(you=='s' && computer=='g'){
        return -1;
    }
    else if(you=='g' && computer=='s'){
        return 1;
    }

    if(you=='s' && computer=='w'){
        return 1;
    }
    else if(you=='w' && computer=='s'){
        return -1;
    }

    if(you=='g' && computer=='w'){
        return -1;
    }
    else if(you=='w' && computer=='g'){
        return 1;
    }

}
int main(){
    char you, computer;
    srand(time(0));
    int number = rand()%100 + 1;

    if(number<33){
        computer = 's';
    }
    else if(number>33 && number<66){
        computer='w';
    }
    else{
        computer='g';
    }
    
    printf("Enter 's' for snake, 'w' for water and 'g' for gun\n");
    scanf("%c", &you);
    int result = snakeWaterGun(you, computer);
    if(result ==0){
        printf("Game draw!\n");
    }
    else if(result==1){
        printf("You win!\n");
    }
    else{
        printf("You Lose!\n");
    }
    printf("You chose %c and computer chose %c. ", you, computer);
    return 0;
}