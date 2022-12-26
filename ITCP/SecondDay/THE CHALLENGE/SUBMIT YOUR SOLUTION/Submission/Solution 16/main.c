#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, nb, y, c;
    printf("Donner le nombre x \n");
    scanf("%d", &x);
    nb =0;
    y = x;
    while(y / 10 != 0){
        c = y % 10;
        nb = nb * 10 + c;
        y = y / 10;
    }
    nb = nb * 10 + y;
    printf(nb);
    return 0;
}
