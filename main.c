#include <stdio.h>

int main() {
    int score = 0;
    int answer;

// Shiv fartiA!
    printf(" Quiz_Game\n");

    // Q1
    printf("\n1) C is a ____ level language?\n");
    printf("1) Low Level\n2) Middle Level\n3) High Level\n4) All of the above\n");
    printf("Enter Your Answer (1-4): ");
    scanf("%d", &answer);
    if(answer == 2) {
        printf("Correct Answer\n");
        score++;
    } else {
        printf("Wrong Answer\n");
    }

    // Q2
    printf("\n2) Which of the following declaration is not supported by C language?\n");
    printf("1) String str;\n2) char *str;\n3) float str = 3e2;\n4) Both (1) & (2)\n");
    printf("Enter Your Answer (1-4): ");
    scanf("%d", &answer);
    if(answer == 1) {
        printf("Correct Answer\n");
        score++;
    } else {
        printf("Wrong Answer\n");
    }

    // Q3
    printf("\n3) How many keywords are there in C programming language?\n");
    printf("1) 42\n2) 32\n3) 35\n4) None of these\n");
    printf("Enter Your Answer (1-4): ");
    scanf("%d", &answer);
    if(answer == 2) {
        printf("Correct Answer\n");
        score++;
    } else {
        printf("Wrong Answer\n");
    }

    // Q4
    printf("\n4) What is #include <stdio.h>?\n");
    printf("1) Preprocessor directive\n2) Inclusion directive\n3) Header file\n4) All of the above\n");
    printf("Enter Your Answer (1-4): ");
    scanf("%d", &answer);
    if(answer == 1) {
        printf("Correct Answer\n");
        
        score++;
    } else {
        
        printf("Wrong Answer\n");
    }
    
    

    

    int totalQuestions = 7;
    int correctAnswers = score;
    int wrongAnswers = totalQuestions - score;
    int totalScore = correctAnswers * 7;

    printf("\nYour total attempted %d questions\n", totalQuestions);
    printf("Your total %d correct answers\n", correctAnswers);
    printf("Your total %d wrong answers\n", wrongAnswers);
    printf("\nYour total score is: %d\n", totalScore);

    printf("\n...Program finished with exit code 0\n");
    printf("Press ENTER to exit ");
    getchar(); 
    getchar(); 

    return 0;
}
