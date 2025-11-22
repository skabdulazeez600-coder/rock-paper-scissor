
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int user, computer;

    printf("Let's play Rock, Paper, Scissors!\n");
    printf("Enter your choice:\n");
    printf("0 - Rock\n1 - Paper\n2 - Scissors\n");
    printf("Your choice: ");
    scanf("%d", &user);

    if(user < 0 || user > 2) {
        printf("Invalid choice. Please enter 0, 1, or 2.\n");
        return 1;
    }

    srand(time(0));
    computer = rand() % 3;

    printf("Computer chose: %d\n", computer);

    // Display choices (optional)
    char *choices[] = {"Rock", "Paper", "Scissors"};
    printf("You chose %s, Computer chose %s.\n", choices[user], choices[computer]);

    // Game logic
    if (user == computer) {
        printf("It's a tie!\n");
    } else if ((user == 0 && computer == 2) ||
               (user == 1 && computer == 0) ||
               (user == 2 && computer == 1)) {
        printf("You win!\n");
    } else {
        printf("You lose!\n");
    }

    return 0;
}