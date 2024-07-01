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
            printf("\n You = Rock \n Computer = Rock");
            printf("\n Game Draw");
        }
        else if (computer == 2) // user=rock, comp=paper
        {
            printf("\n You = Rock \n Computer = Paper");
            printf("\n Computer Won");
        }
        else // user=rock, comp=scissor
        {
            printf("\n You = Rock \n Computer = Scissor");
            printf("\n You Won");
        }
        break;
    case 2: // user=paper
        if (computer == 1)
        {
            printf("\n You = Paper \n Computer = Rock");
            printf("\n You Won");
        }
        else if (computer == 2) // user=paper, comp=paper
        {
            printf("\n You = Paper \n Computer = Paper");
            printf("\n Game Draw");
        }
        else // user=paper, comp=scissor
        {
            printf("\n You = Paper \n Computer = Scissor");
            printf("\n Computer Won");
        }
        break;
    case 3: // user=scissor
        if (computer == 1)
        {
            printf("\n You = Scissor \n Computer = Rock");
            printf("\n Computer Won");
        }
        else if (computer == 2) // user=scissor, comp=paper
        {
            printf("\n You = Scissor \n Computer = Paper");
            printf("\n You Won");
        }
        else // user=scissor, comp=scissor
        {
            printf("\n You = Scissor \n Computer = Scissor");
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
