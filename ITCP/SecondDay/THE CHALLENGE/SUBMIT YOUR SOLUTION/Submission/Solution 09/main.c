#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1[5], a2[5], a3[5], i, j, k, l;
    for(i=0; i<5; i++){
        printf("donner a1[%d]", i+1);
        scanf("%d", &a1[i]);
    }

    for(j=0; j<5; j++){
        printf("donner a2[%d]", j+1);
        scanf("%d", &a2[j]);
    }

    k=0;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(a1[i] == a2[j]){
                a3[k] = i;
                k++;
            }
        }
    }

    for(l=0; l<k-1; l++){
        printf("a3[%d] = %d \n", l+1, l);
    }

    return 0;
}
