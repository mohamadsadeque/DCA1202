#include <stdio.h>

int *criar(void){
    int *x;
    x = (int*)malloc(10*sizeof (int));
    int i;
    for(i=0;i<10;i++) x[i] = i;
    return x;
}
int main()
{
    int *y, i;
    y = criar();
    for(i = 0; i < 10;i++) *(y+i)= 10-i;
    for( i=0;i<10;i++) printf("%d, ",y[i]);
    free(y);
    return 0;
}
