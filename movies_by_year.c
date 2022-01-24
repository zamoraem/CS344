#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <stdbool.h>
//#include <unistd.h>


/*
*   Present file processing prompts in range (1 to 3)
*       1 = process largest file
*       2 = process smallest file
*       3 = user enters file name to process
*/
void printFilePrompts(){
    printf("Which file you want to process?\n");
    printf("Enter 1 to pick the largest file\n");
    printf("Enter 2 to pick the smallest file\n");
    printf("Enter 3 to specify the name of a file\n");
    printf("Enter a choice from 1 to 3: ");
    return;
}


/*
*   Present initial prompts in range (1 to 2)
*       1 = process file
*       2 = exit the program
*/
void printInitialPrompts(){
    printf("1. Select the file to process\n");
    printf("2. Exit the program\n\n");
    printf("Enter a choice 1 or 2: ");
    return;
}

/*
*   Finds the largest file with the extension csv in the
*       current directory whose name starts with the prefix
*       'movies_' and automatically processes it
*/
void processLargestFile(){
    printf(" ");

    return;
}

/*
*   Finds the smallest file with the extension csv in the
*       current directory whose name starts with the prefix
*       'movies_' and automatically processes it
*/
void processSmallestFile(){
    printf(" ");

    return;
}

/*
*   Prompts the user to enter the name of a file
*       If file is not found, presents choices again
*/
void processUserFile(){
    char[30] inFileName;
    bool validFile = false;

    do{
        printFilePrompts()
        printf("Enter the complete file name: ");
        scanf("%s", &inFileName);
        // 
        
    }while ()

    printf("Now processing the chosen file named %s\n", inFileName);

    return;
}


/* 
*   Present user with file processing options in range (1 to 3)
*       1 = call processLargestFile()
*       2 = call processSmallestFile()
*       3 = call processUserFile()
*/
void selectFile(){
    int userChoice;
    char[30] inFileName;
    /* IS THERE A MAX LENGTH OR USE DYNAMIC MEM ALLOCATION??*/

    // Present choices to user, validate choice is 1 to 3
    do{
        printFilePrompts();
        scanf("%d", &userChoice);
    }while (userChoice != 1 && userChoice != 2 && userChoice 1= 3);

    switch (userChoice){
        case 1:
            processLargestFile()
            // printf("Now processing the chosen file named %s\n", inFileName);
            break;
        case 2:
            processSmallestFile()
            // printf("Now processing the chosen file named %s\n", inFileName);
            break;
        case 3:
            processUserFile()
            // printf("Now processing the chosen file named %s\n", inFileName);
            break;
        default:
            break;
    }
    return;
}

/*
*
*
*
*/
int main(){
    int userChoice;
    // Present choices to user, validate choice is 1 or 2
    do{
        printInitialPrompts();
        scanf("%d", &userChoice);
    } while (userChoice != 1 && userChoice != 2);

    switch (userChoice){
        case 1:
            selectFile();
            break;
        case 2:
            break;
        default:
            break;
    }
    return 0;
}

/*
*
*
*
*/

/*
*
*
*
*/