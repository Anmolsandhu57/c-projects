#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int user, computer;
    printf("=====Rock Paper Sessiors====\n");
    printf("\n1. Rock");
    printf("\n2. Paper");
    printf("\n3. Sessiors");
    printf("Enter your choice : ");
    scanf("%d", &user);

    srand(time(0));
    computer = rand( ) %3 + 1;

    printf("computer chose : %d\n", computer);

    if(user == computer){
        printf("It's a draw!\n");
    }
    else if(user == 1 && computer == 3){
        printf("Yoy win!\n");
    }
    else if(user == 2 && computer == 1){
        printf("You win!\n");
    }
    else if(user == 3 && computer == 2){
        printf("You win!\n");
    }
    else{
        printf("Computer wins!\n");
    }
    return 0;
}