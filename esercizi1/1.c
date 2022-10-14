#include <stdio.h>

void main()
{
    //dichiariamo la variabile n
    //numero di elementi da considerare
    int n;
    printf("Inserire il valore di n \n");
    scanf("%d", &n);

    printf("ti stamperò i quadrati perfetti fin a %d\n", n);
    int sq;
    for (int i = 1; i <= n; i++)
        {
           sq = i*i;
           printf("Il quadrato di %d è %d\n", i, sq);
        }

    for (int i = n; i >= 1; i--){}
}

