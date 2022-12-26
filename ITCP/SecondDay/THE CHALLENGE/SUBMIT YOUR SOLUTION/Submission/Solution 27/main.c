#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Donner two numbers");
    scanf("%d%d", &a, &b);

    if((a + b) < 100){
        printf("true!");
    }else{
    printf("false!");
    }
    return 0;
}
