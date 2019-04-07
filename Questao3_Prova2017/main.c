#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char *sobrenome(char *p){
    char *x;
    for(int i = 0; i<80;i++){
        if(*(p+i) == ' '){
            x = p+i+1;
            return x;
        }
    }

}
int main(int argc, char *argv[])
{
    char nome[80];
    char *p;
    puts("digite seu nome e seu sobrenome: ");
    gets(nome);
    p = sobrenome(nome);
    puts(p);
    return 0;
}


