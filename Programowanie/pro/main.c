#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    /*int liczby[] = {4, 10, 3, -1, 3, 0, 0, 0, 0, 0};

    int x = 10000;
    int y = 0;



    for(int i = 10; i >= 0; i--)
        liczby[i] = liczby[i + 1];

    liczby[0] = x;*/

    /*int liczby1[] = {4, 10, 13, -1, 3};
    int liczby2[] = {-1, 3, 4, 10, 13};

    printf("Prosimy zignorowac pozycjeas 3\n\n");
    printf("lista 1\n");
    for(int i = 0; i < 5 - 1; i++)
        if(liczby1[i] <= liczby1[4 - i])
            printf("pozycja %d - OK\n", i);
        else
            printf("pozycja - %d NIE\n", i);

    printf("lista 2\n");
    for(int i = 0; i < 5 - 1; i++)
        if(liczby2[i] <= liczby2[4 - i])
            printf("pozycja %d - OK\n", i);
        else
            printf("pozycja - %d NIE\n", i);*/


    char literki[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char slowo[]   = "UHYHUVH RG JDERU WR SUDZLH UREDN";
    int klucz      = 3;
    int lA = strlen(literki);
    int indeks = 0; int NowyIndeks = 0;

    /*for(int i = 0; i < 3; i++){
        for(int j = 0; j < lA; j++){
            if(slowo[i] == literki[j]){
                indeks = j;
                NowyIndeks = (indeks + klucz) % lA;
                slowo[i] = literki[NowyIndeks];
            }
        }
    }*/

    for(int i = 0; i < 32; i++){
        for(int j = 0; j < lA; j++){
            if(slowo[i] == literki[j]){
                indeks = j;
                NowyIndeks = (indeks + klucz) % lA;
                slowo[i] = literki[NowyIndeks];
            }
        }
    }





    printf("%s", slowo);

    return 0;
}
