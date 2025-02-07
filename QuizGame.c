#include <mysql.h>
#include <stdio.h>
#include <stdlib.h>>

int main( int agrc, char **argv)
{
    MYSQL *con = mysql _init(NULL);

    if (con == NULL)
    {
        fprintf (stderr, "%s\n",mysql_error(con));
        exit(1);
    }
}



void displayQuestion(int questionNumber) {
    switch (questionNumber) {
        case 1:
            printf("Question 1: Who is the father of C language?\n");
            printf("A)Steve Jobs\n B) B James Gosling\n C) Dennis Ritchie\n D) Rasmus Lerdorf\n");
           
            break;
        case 2:
            printf("Question 2: Which of the following is not a valid C variable name?\n");
            printf("A)int number\n B)float rate\n C)int variable_count\n D)int $main\n");
            break;
        case 3:
            printf("Question 3: All keywords in C are in ____________'?\n");
            printf("A) LowerCase letters\n B)UpperCase letters\n C)CamelCase letters D) None of the mentioned\n");
        break;

        case 4:
            printf("Question 4: Which of the following is true for variable names in C?\n");
            printf("A)They can contain alphanumeric characters as well as special characters\n B)It is not an error to declare a variable to be one of the keywords(like goto, static)\n C)Variable names cannot start with a digit\n D)Variable can be of any length\n");
            break;
        case 5:
            printf("Question 5:Which of the following cannot be a variable name in C?\n");
            printf("A)Volatile\n B)True\n C)Friend\n D) Export\n");
            break;
       


        default:
            printf("Invalid question number.\n");
    }
}

char getUserAnswer() {
    char answer;
    printf("Your answer (A/B/C/D): ");
    scanf(" %c", &answer);
    return answer;
}

int checkAnswer(int questionNumber, char answer) {
    switch (questionNumber) {
        case 1:
            return (answer == 'C' || answer == 'c');
        case 2:
            return (answer == 'D' || answer == 'd');
        case 3:
            return (answer == 'A' || answer == 'a');
         case 4:
            return (answer == 'C' || answer == 'c');
        case 5:
            return (answer == 'A' || answer == 'a');


        default:
            return 0;
    }
}

int main() {
    int score = 0;
    int totalQuestions = 5;

    for (int i = 1; i <= totalQuestions; i++) {
        displayQuestion(i);
        char userAnswer = getUserAnswer();
        
        if (checkAnswer(i, userAnswer)) {
            printf("Correct!\n\n");
            score++;
        } else {
            printf("Incorrect. The correct answer was ");
            switch (i) {
                case 1: printf("C)  Dennis Ritchie\n\n"); break;
                case 2: printf("D )  int $main\n\n"); break;
                case 3: printf("C) LowerCase letter\n\n"); break;
                case 4: printf("C) Variable names cannot start with a digit\n\n"); break;
                case 5: printf("B) volatile\n\n"); break;
              
            }
        }
    }

    printf("Your final score is %d out of %d.\n", score, totalQuestions);
    return 0;
}