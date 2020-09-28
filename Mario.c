//C Program Set Up
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
//These are all of the variables which I will require
    int height;
    int i;
    int j;
    int y;
    int cont = 1;
//Begins the main event loop
    while(cont == 1)
    {
//Prints the contents of the brackets
        printf("Please enter the Height(1-23): \n");
//Takes a user input
        scanf("%i", &height);
//New Line
        printf("\n");
//Error handling: Checks if the input value is between 1-23
        if (height <= 0 || height >= 24)
        {
//If not, an error message is printed and the loop restarts
            printf("Invalid Input\n");
        }
//Otherwise, carries out the intended purpose of the program
        else
        {
//Sets the initial number of spaces and hashes, to then be printed
            int spaces = height+1;
            int hashes = 0;
//Initiates the main for loop
            for (i=0; i<height+1; i++)
            {
//Initiates the for loop to print spaces
                for (j=0; j<spaces; j++)
                {
//Prints the spaces
                    printf(" ");
                }
                if (hashes != 0)
//Initiates the for loop to print hashes
                {
                    for (y=0; y<hashes+1; y++)
                    {
//Prints the hashes
                        printf("#");
                    }
                }

                printf("\n");
//updates the number of hashes and spaces
                spaces -= 1;
                hashes += 1;
            }
//Ends the main event loop
            cont = 0;
        }
    }
//Ends the program
    return 0;
}
