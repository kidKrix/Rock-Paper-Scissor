#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int user, computer; // global declaration
int menu()
{
    int ch;
    printf("Let's play Rock-Paper-Scissor");
    printf("\n Select your throw:");
    printf("\n \n 1.Select Rock");
    printf("\n 2.Select Paper");
    printf("\n 3.Select Scissor");
    printf("\n 4.  Exit");
    printf("\n \n Enter your choice: ");
    scanf("%d", &ch);
    return (ch);
}
void setup()
{
label:
    computer = rand() % 4; // rand generate a large number, if we module the number by 4 the answer will between 0 to 3
    if (computer == 0)
        goto label;

    user = menu();
}
void logic()
{
    switch (user)
    {
    case 1: // user=rock, comp=rock
        if (computer == 1)
        {
            printf("\n You choose Rock \n Computer choose Rock");
            printf("\n Selected items are the same");
            printf("\n Game Draw");
        }
        else if (computer == 2) // user=rock, comp=paper
        {
            printf("\n You choose Rock \n Computer choose Paper");
            printf("\n Paper covers Rock");
            printf("\n Computer Won");
        }
        else // user=rock, comp=scissor
        {
            printf("\n You choose Rock \n Computer choose Scissor");
            printf("\n Rock crushes Scissors");
            printf("\n You Won");
        }
        break;
    case 2: // user=paper
        if (computer == 1)
        {
            printf("\n You choose Paper \n Computer choose Rock");
            printf("\n Paper covers Rock");
            printf("\n You Won");
        }
        else if (computer == 2) // user=paper, comp=paper
        {
            printf("\n You choose Paper \n Computer choose Paper");
            printf("\n Selected items are the same");
            printf("\n Game Draw");
        }
        else // user=paper, comp=scissor
        {
            printf("\n You choose Paper \n Computer choose Scissor");
            printf("\n Scissors cut Paper");
            printf("\n Computer Won");
        }
        break;
    case 3: // user=scissor
        if (computer == 1)
        {
            printf("\n You choose Scissor \n Computer choose Rock");
            printf("\n Rock crushes Scissors");
            printf("\n Computer Won");
        }
        else if (computer == 2) // user=scissor, comp=paper
        {
            printf("\n You choose Scissor \n Computer choose Paper");
            printf("\n Scissors cut Paper");
            printf("\n You Won");
        }
        else // user=scissor, comp=scissor
        {
            printf("\n You choose Scissor \n Computer choose Scissor");
            printf("\n Selected items are the same");
            printf("\n Game Draw");
        }
        break;
    case 4: //user choose to exit
        exit(0);
    default:
        printf("\n Your choice is invalid.");
    }
}
int main()
{
    while (1)
    {
        system("cls");
        setup();
        logic();
        getch();
    }
    return 0;
}
