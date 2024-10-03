/*Suzanne Abdullah, 400535629, 19-09-2024*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    /*defining all question, answer and response variables*/
    char *q1 = "What are the code blocks in C code delimited by? (hint: curly brackets)\n";
    char *ans1 = "braces";
    char *q2 = "What is the name of the default file editor in linux?\n";
    char *ans2 = "vim";
    char *q3 = "What git command would you use to add a snapshot of a file to the staging area/cache?\n";
    char *ans3 = "git add";
    char *right = "Correct!!!\n";
    char *wrong = "Incorrect!!!\n";
    
    /*if no arguments are provided when run, program prints help message and returns EXIT_FAILURE*/
    if (argc < 2) {
        printf("Usage: quiz [-#] [<answer>]\n");
        printf("Try 'quiz --help' for more information\n");
        return EXIT_FAILURE;
    }

    /*prints manual when "--help" command is used*/
    else if (strcmp(argv[1],"--help")== 0){
        printf("Usage: quiz [QUESTION#]... [ANSWER]\n");
        printf("Checks answers to quiz questions relating to linux, git and C\n");
        printf("Note: answers should be entered in all lowercase characters\n");
        printf("\nWithout answer, prints question.\n\n");
        printf("    -1              prints quiz question 1\n");
        printf("    -1 'Answer'     gives feedback on whether answer to question 1 is correct or incorrect\n");
        printf("    -2              prints quiz question 2\n");
        printf("    -2 'Answer'     gives feedback on whether answer to question 2 is correct or incorrect\n");
        printf("    -3              prints quiz question 3\n");
        printf("    -3 'Answer'     gives feedback on whether answer to question 3 is correct or incorrect\n");
        printf("    --help      display this help and exit\n");
        printf("\nExamples:\n");
        printf("quiz -1     output quiz question 1\n");
        printf("quiz -2 'Visual studio code'    compares input to answer and outputs 'Incorrect!!!'\n");

    }

    /*if one argument is provided when run, loop checks the argument against valid variables entries 
    if it matches none, a help messege is printed and EXIT_FAILURE is returned*/
    else if (argc == 2)
    {
        if (strcmp(argv[1], "-1")== 0){ /*nested if statements print their respective questions*/
            printf(q1);
        }

        else if (strcmp(argv[1], "-2")== 0){
            printf(q2);
        }

        else if (strcmp(argv[1], "-3")== 0){
            printf(q3);
        }

        else {
           printf("Usage: quiz [-#] [<answer>]\n");
           printf("Try 'quiz --help' for more information\n");
           return EXIT_FAILURE;
        }
    }

    /*if two or more arguments are entered, answers are evaluated from the user, after checking the first parameter using if statements
    any other cases will print help message and return EXIT_FAILURE*/
    else if (argc > 2)
    {
        if (strcmp(argv[1], "-1")== 0) { /*checks if question number is 1*/   
            if (strcmp(argv[2], ans1)== 0) { /*checks if user input matches answer*/
                printf(right);
            }

            else {
                printf(wrong);
            }
        }

        else if (strcmp(argv[1], "-2")== 0) {
            if (strcmp(argv[2], ans2)== 0) {
                printf(right);
            }

            else {
                printf(wrong);
            }
        }

         else if (strcmp(argv[1], "-3")== 0) {
            if (strcmp(argv[2], ans3)== 0) 
            {
                printf(right);
            }
            
            else
            {
                printf(wrong);
            }  
        }
        
        else {
            printf("Usage: quiz [-#] [<answer>]\n");
            printf("Try 'quiz --help' for more information\n");
            return EXIT_FAILURE;
        }

    }

    /*final method of catching boundary cases, help statement is printed and EXIT_FAILURE is returned*/
    else 
    {
        printf("Usage: quiz [-#] [<answer>]\n");
        printf("Try 'quiz --help' for more information\n");
        return EXIT_FAILURE;
    }
    
    /*if code block is completed succesfully, the program returns EXIT_SUCCESS*/
    return EXIT_SUCCESS;

    }