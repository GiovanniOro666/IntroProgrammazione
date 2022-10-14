#include <stdio.h>

void main()

{
    int x; //inizializzo x
    float s = 0; //inizializzo la somma a 0

    for (int i = 0; i < 3; i++) //ciclo for in cui inizializzo i, e continua finché minore di 3
    {
        printf("inseriscisci il numero (x_%d):", i);
        scanf("%d", &x);
        s = s + x;
            
    }
    float media = s / 3;                //inizializzo la media
    printf("la media è: %f", media);    //per farmi vedere il risultato
}