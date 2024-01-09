#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int generateComputerChoice() {
    return rand() % 3 + 1;
}

void determineWinner(int userChoice, int computerChoice,char a[100]) {
    if (userChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((userChoice == 1 && computerChoice == 3) ||
               (userChoice == 2 && computerChoice == 1) ||
               (userChoice == 3 && computerChoice == 2)) {
        printf("Congratulation %s you won the game!\n",a);
    } else {
        printf("Computer wins!\n");
    }
}

void main() {
    int userChoice;
    char t,name[100];

    srand(time(NULL));

    printf("Rock-Paper-Scissors Game\n");
    printf("Press Enter to Start\n");
    scanf("%c",&t);

    printf("\nEnter Your name\n");
    scanf("%99s",name);

    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &userChoice);

    if (userChoice < 1 || userChoice > 3) {
        printf("Invalid choice. Please enter a number between 1 and 3.\n");
        return 1;
    }

    int computerChoice = generateComputerChoice();


    printf("You chose: ");
    switch (userChoice) {
        case 1:
            printf("Rock\n");
            break;
        case 2:
            printf("Paper\n");
            break;
        case 3:
            printf("Scissors\n");
            break;
    }

    printf("Computer chose: ");
    switch (computerChoice) {
        case 1:
            printf("Rock\n");
            break;
        case 2:
            printf("Paper\n");
            break;
        case 3:
            printf("Scissors\n");
            break;
    }
    determineWinner(userChoice,computerChoice,name);

}
