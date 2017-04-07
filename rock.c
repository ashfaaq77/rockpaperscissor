#include "stdio.h"
#include "stdlib.h"
#include "string.h"


int main()
{
        char input[7];


    while(1)
    {

        puts("Enter rock/paper/scissor");
       gets(input);

        char *game[] = {"rock", "paper", "scissor", NULL};

        int x = 1+ rand()%2;


        if(strcmp(input,"rock") == 0 || strcmp(input,"paper") == 0 || strcmp(input,"scissor") == 0 )
        {

        }
        else
        {
            puts("You wrongly input");
            break;
        }

        char ch = game[x];

        int d = strcmp(input,game[x]);



        if(strcmp(input,game[x]) == 0)
        {
            puts("It's a tie");
        }

        if(strcmp(input,game[x]) == 1)
        {
            if(strcmp(input,"rock") == 0)
            {
                puts("You lose");
            }
            else
                {
                    if(strcmp(game[x],"rock") == 0)
                    {
                        puts("You lose");
                    }
                    else
                    {
                        puts("You win");
                    }
                }
        }


        if(strcmp(input,game[x]) == -1)
        {
            if(strcmp(game[x],"scissor") == 0)
            {
                if(strcmp(input,"rock") == 0)
                {
                    puts("You win");
                }else
                {
                    puts("You lose");
                }
            }
            else
            {
                if(strcmp(game[x],"rock") == 0)
                {
                    puts("You win");
                }
                else
                {
                    puts("You lose");
                }
            }
        }

        printf("Computer = %s\n", game[x]);

        puts("Do you want to continue");
        puts("quit to quit and press enter to continue");
        char choice[4];
        gets(choice);

        if(strcmp(choice,"quit") == 0)
        {
            break;
        }


    }

    return 0;
}



