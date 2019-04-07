#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int *funcao(int *b,int tam, int ntam);
int main(int argc, char *argv[])
{
    int i,*x;
    int n= 5;
    int ntam = 10;
    x = (int*)malloc(n*sizeof (int));
    for(i = 0; i<n;i++) *(x+i) = i;
    x = funcao(x,n,ntam);

    for(i = 0; i< ntam; i++) printf("%d, ",x[i]);
    free(x);
    return 0;
}
int *funcao(int *b,int tam, int ntam){
    int *a;
    if(tam < ntam){
      a = (int*)malloc(ntam*sizeof (int));
      for(int i = 0; i<tam;i++) *(a+i) = *(b+i);
      for(int i = tam; i<ntam; i++) *(a+i) = 0;
      free(b);
      return a;
    }
    else if(tam > ntam){
        a = (int*)malloc(ntam*sizeof (int));
        for(int i = 0; i<ntam;i++) *(a+i) = *(b+i);
        free(b);
        return a;
    }
    else{
        return b;
    }


}
