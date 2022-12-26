#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, s;
    printf("Donner un nombre \n");
    scanf("%d", &n);

    s = 1;
    for(i=2; i<n; i++){
        if(n % i == 0){
            s = s + i;
        }
    }

    if(n == s){
        printf("the number is perfect");
    }else{
    printf("The number it not perfect");
    }


    return 0;
}
