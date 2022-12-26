#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf("Donner l'annee");
    scanf("%d", &year);

    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        printf("The year is leap");
    }else{
    printf("the year in not leap");}
    return 0;
}
