#include <stdio.h>

int main() {
    int score = 0;
    char answer;

    printf("=================================\n");
    printf("        QUIZ GAME IN C\n");
    printf("=================================\n");

    // Question 1
    printf("\n1. Which language is used for system programming?\n");
    printf("A. Python\nB. Java\nC. C\nD. HTML\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if (answer == 'C' || answer == 'c') {
        score++;
    }

    // Question 2
    printf("\n2. What is the correct extension of C program?\n");
    printf("A. .cpp\nB. .c\nC. .java\nD. .py\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if (answer == 'B' || answer == 'b') {
        score++;
    }

    // Question 3
    printf("\n3. Which symbol is used to end a statement in C?\n");
    printf("A. :\nB. .\nC. ;\nD. ,\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if (answer == 'C' || answer == 'c') {
        score++;
    }

    // Question 4
    printf("\n4. Which function is used to print output in C?\n");
    printf("A. print()\nB. display()\nC. printf()\nD. write()\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if (answer == 'C' || answer == 'c') {
        score++;
    }

    // Question 5
    printf("\n5. Which header file is required for printf()?\n");
    printf("A. stdlib.h\nB. conio.h\nC. stdio.h\nD. math.h\n");
    printf("Enter your answer: ");
    scanf(" %c", &answer);

    if (answer == 'C' || answer == 'c') {
        score++;
    }

    printf("\n=================================\n");
    printf("Your Final Score: %d / 5\n", score);

    if (score >= 4)
        printf("Excellent! 🎉\n");
    else if (score >= 2)
        printf("Good Try 👍\n");
    else
        printf("Better Luck Next Time 🙂\n");

    printf("=================================\n");

    return 0;
}