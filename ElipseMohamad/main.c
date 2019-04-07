//Código para desenhar uma ellipse usando uma matriz tridmensional

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ***x;
int nlin, ncol,nfat,parte;
float Center_x,Center_y,Center_z,a,b,c;

int escrevaMatriz(int x, int y, int z){
    if ((pow(x-Center_x,2)/a + pow(y-Center_y,2)/b) <= (1.0 - pow(z-Center_z,2)/c)) return 1;
    else return 0;
}

void imprimirFatia(int z){
    for(int i=0; i< nlin; i++)
    {
        printf("\n");
        for(int j=0; j< ncol; j++)
        {

            printf("%d", x[i][j][z]);
        }

    }
}

int main(){

    printf("Escreva as dimensoes dos eixos, que sejam impares e maiores/iguais a 5:\n");
   do{
        printf("Escreva a dimensao x:");
        scanf("%d", &nlin);
    } while(nlin%2 == 0 || nlin < 5);

    do{
        printf("Escreva a dimensao y:");
        scanf("%d", &ncol);
    }while(ncol%2 == 0 || ncol <5);

    do{
        printf("Escreva a dimensao z:");
        scanf("%d", &nfat);
    }while(nfat%2 == 0 || nfat <5);

    Center_x = nlin/2;Center_y= ncol/2;Center_z = nfat/2;
    a = pow(Center_x,2); b = pow(Center_y,2); c = pow(Center_z,2);

    x = malloc(nlin*sizeof(int**));
    x[0]= malloc(nlin*ncol*sizeof(int*));
    x[0][0] = malloc(nlin*ncol*nfat*sizeof(int));

    for(int i=0; i< nlin; i++)
        {
          x[i+1] = x[i]+ncol;
          for(int j= 0; j<ncol;j++){
              x[i][j+1] = x[i][j]+nfat;
          }
        }


    for(int k = 0; k<= Center_z; k++){
        for(int i = 0; i<nlin; i++){
            for(int j = 0; j<ncol; j++){
                x[i][j][k] = escrevaMatriz(i,j,k);
                int mk = (nfat-1) - k;
                x[i][j][mk] = x[i][j][k];
            }
        }
    }

   do{
        printf("Escreva qual parte da matriz deve ser impressa: \nO numero deve estar no intervalo de 0 a %d \n",nfat-1);
        scanf("%d", &parte);
    } while(parte < 0 || parte >= nfat);

    imprimirFatia(parte);

    free(x[0][0]);
    free(x[0]);
    free(x);

    return 0;
}
