/******************************************************** 
* Programme : positif * 
* but : dire si un nombre entre au clavier est positif * 
* * 
* Auteur : Anaïs * 
* BTS CIEL * 
* LPO Robert DOISNEAU * 
*******************************************************/ 
#include <stdio.h>

int main(int argc, char *argv[]) 
{ 
    int nombre;

    printf("Entrer un nombre entier : ");
    scanf("%d", &nombre);

    if (nombre >= 0) 
    {
        printf("%d est un nombre positif.\n", nombre);
    }

    return 0; 
}
