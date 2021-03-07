
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define WALLS_IN_DICE 6
#define MAX_BAR_HEIGHT 20
int main(void)
{
    int n;
    scanf("%d", &n);
    int A[2 * WALLS_IN_DICE]; //tworzę wyzerowaną tablicę która ma 12 miejsc
    for (int i = 0; i < 2 * WALLS_IN_DICE; i++)
    {
        A[i] = 0;
    }

    srand((unsigned)time(NULL));
    for (int i = 0; i < n; i++) //rzucam dwa razy kostką n razy
    {
        int x = rand() / (double)RAND_MAX * WALLS_IN_DICE + 1; //oczka na pierwszej kostce
        int y = rand() / (double)RAND_MAX * WALLS_IN_DICE + 1; //oczka na drugiej kostce
        A[x + y - 1]++;                                        //zwiększam n-1 wartość tablicy o jeden jeśli suma oczek to n
        //W A[0] przechowuję liczbę sum = 1, w A[1] liczbę sum = 2, w A[2] liczbę sum 3 itd.
    }

    //górna część ramki
    printf("+");
    for (int i = 0; i < MAX_BAR_HEIGHT + 3; i++)
    {
        printf("-");
    }
    printf("+\n");

    //środkowa część ramki
    for (int i = MAX_BAR_HEIGHT; i > 0; i--)
    {
        printf("| "); //przy każdym obrocie pętli na początku drukuję "| "

        for (int j = 1; j < 12; j++)
        {
            if (MAX_BAR_HEIGHT * A[j] / A[6] >= i) //drukuję gwiazdkę jeśli przeskalowana liczba sumy oczek jest równa "wysokości" na której się znajduje
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("|\n");
    }

    //dolna część ramki
    printf("+");
    for (int i = 0; i < MAX_BAR_HEIGHT + 3; i++)
    {
        printf("-");
    }
    printf("+\n");
    return 0;
}