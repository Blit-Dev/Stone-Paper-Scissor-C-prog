#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Stone   - 1
//Paper   - 2
//Scissor - 3

int aiplay()
{
    srandom(time(NULL));
    int r=random()%3+1;
    return r;
}
int main()
{
    printf("\nStone Paper Scissor Game\n");
    printf("Press 1 for Stone\n");
    printf("Press 2 for Paper\n");
    printf("Press 3 for Scissor\n");
    printf("Press 4 to Check Score\n");
    printf("Press 5 to QUIT\n");

    printf("\n");
    int ch;
    printf("Enter your Choice: ");
    scanf("%d",&ch);
    int aip=0,playp=0;


    while(ch!=5)
    {
        printf("\n");
        int ai=aiplay();
        if(ch==1)//USER-STONE
        {
            if(ai==1)
            {
                printf("AI-Stone | Player-Stone\n");
                printf("No Point\n");
            }
            else if(ai==2)
            {
                printf("AI-Paper | Player-Stone\n");
                printf("Point to AI\n");
                aip++;
            }
            else
            {
                printf("AI-Scissor | Player-Stone\n");
                printf("Point to Player\n");
                playp++;
            }
        }
        else if(ch==2)//USER - PAPER
        {
            if(ai==1)
            {
                printf("AI-Stone | Player-Paper\n");
                printf("Point to Player\n");
                playp++;
            }
            else if(ai==2)
            {
                printf("AI-Paper | Player-Paper\n");
                printf("No Point\n");
            }
            else
            {
                printf("AI-Scissor | Player-Paper\n");
                printf("Point to AI\n");
                aip++;
            }            
        }
        else if(ch==3)//PLAYER-Scissor
        {
            if(ai==1)
            {
                printf("AI-Stone | Player-Scissor\n");
                printf("Point to AI\n");
                aip++;
            }
            else if(ai==2)
            {
                printf("AI-Paper | Player-Scissor\n");
                printf("Point to Player\n");
                playp++;
            }
            else
            {
                printf("AI-Scissor | Player-Scissor\n");
                printf("No Point\n");
            }
        }
        else if(ch==5)
        {
            printf("QUITTING....\n");
            break;
        }
        else if(ch==4)
        {
            printf("\n");
            printf("SCORE\n");
            printf("Player - %d\n",playp);
            printf("AI - %d\n",aip);
            printf("\n");
        }
        else
        {
            printf("Enter choice btw (1-5)\n");
        }
    printf("\n");
    printf("Enter your Choice: ");
    scanf("%d",&ch);
    }
    printf("\n");
    printf("GAME OVER!!!!!\n");
    printf("SCORE\n");
    printf("Player - %d\n",playp);
    printf("AI - %d\n",aip);
    if(aip>playp)
    {
        printf("You Lost , AI WON\n");
    }
    else
    {
        printf("You Won , AI LOST\n");
    }
}

