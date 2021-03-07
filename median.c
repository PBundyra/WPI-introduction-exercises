#include <stdio.h>

//- program wykonuje jedno zbędne porównanie (gdy i = 1 oraz j = 1 porównujemy t[1] z t[1]) :)

int main(void)
{
    int temp;
    int t[3];
    scanf("%d%d%d", &t[0], &t[1], &t[2]);
    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (t[i] > t[j])
            {
                temp = t[i];
                t[i] = t[j];
                t[j] = temp;
            }
        }
    }
    printf("%d\n", t[1]);
    return 0;
}