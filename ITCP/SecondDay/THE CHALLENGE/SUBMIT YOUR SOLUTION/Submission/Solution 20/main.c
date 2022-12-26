#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, cpt;
    printf("Donner un nombre \n");
    scanf("%d", &n);

    cpt = 0;
    for(i=2; i<n; i++){
        if(n % i == 0){
            cpt++;
        }
    }

    if(cpt == 0){
        printf("Le nombre est premier");
    }else{
    printf("le nombre n'est pas premier");
    }
    return 0;
}
