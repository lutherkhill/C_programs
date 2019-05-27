#include <stdio.h>

int man (int argc, char const *argv[])
{
    char cResponse = '\0';

    printf("\n\tAC Control Unit\n");
    printf("\na\tRuen AC on\n");
    printf("b\tTurn AC off\n");
    printf("\nEnter your selection: ");

    scanf("%c", &cResponse);
    if (cResponse == 'a' || cResponse == 'A')
    {
       printf("\nAC is now on\n");
    }

    if (cResponse == 'b' || cResponse == 'B')
    {
        printf("\nAC is now off\n");
    }


    return 0;
}
