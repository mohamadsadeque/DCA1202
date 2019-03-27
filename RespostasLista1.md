# DCA1202
## Lista de Ponteiros
### Aluno: Mohamad Sadeque Abou Ali
### Matrícula: 20170030618
1. O uso de ponteiros contribui para tornar a programação mais ágil em tempo de execução do programa, além de ser  necessário para o gerenciamento de alocação dinâmica, permitindo um alto desempenho na solução de problemas.

2. 
| Expressão   |     Saída     |
|----------|:-------------:|
| p == &i; |  true |
| *p - *q; |    -2   |
| **&p; | 3 |
|   3 - *p/(*q) + 7;     |         10      |
  

3.
| Expressão | Saída |
|-----------|:-----:|
| p         | 0xFFE |
| *p+2      |   7   |
| **&p      |   5   |
| 3**p      | 15    |
| **&p+4    | 9     |

4. As seguintes expressões são ilegais
  * p = i;
  * i = (*&)j;
  * i = *&*&j;
  * q = *p;

5.Determine o que será mostrado pelo seguinte programa (compile-o, execute-o e verifique se foram obtidas as respostas esperadas).
 * (a) **20** (_p1_ tem o endereço de _valor_ , assim, quando desreferenciamos _p1_ e atribuimos 20, ao printar _valor_ , a saida é 20)
 * (b) **29.0**
 
 * (c) **P** (_p3_ assume o endereço do primeiro bit da variavel _nome_, quando _p3_ é desreferenciado, assume os primeiros 8 bits que formam a letra P e atribui a variavel _aux_.)
    
 * (d) **e**
    
 * (e) **P** (Como o tipo char só suporta um byte, só atribui a letra P a variavel _p3_)
    
 * (f) **e** (Ao incrementar 4 na variável p3, pulou , e o  resto da palavra que ficou no espaço de memória adjacente a variável p3 na operação anterior, foi acessada)
    
 * (g) **t** (Decrementando uma unidade em _p3_ o valor retornado é o da letra anterior do último endereço salvo)
    
 * (h) **31** (_p4_ recebe o endereço do primeiro número de vetor de inteiros, atribui o seu valor a idade e imprime)
    
 * (i) **45** (_p5_ recebe o endereço de _p4_ e desloca uma unidade a direita do espaço salvo, mostrando o próximo número do vetor)
   
 * (j) **27**
    
 * (l) **31** (Decrementando duas unidades no espaço, _p4_ vai estar guardando o endereço do primeiro espaço do vetor)
    
 * (m) **45** 
    
 * (n) **27**
 
 6.
 O programa apresenta a comparação dos resultados em acessar os elementos e o endereço das posições de um vetor, sendo feito da forma direta e com o uso de um ponteiro com o endereço da primeira posição do vetor e com isso ir incrementando esse endereço pelo tipo do ponteiro e com isso acessando as outras posições do vetor.
 
 **Saída**
 
 ![readme2](https://user-images.githubusercontent.com/30416594/54968640-27821c00-4f5a-11e9-9ceb-0f308834663a.png)

 7. (pulo + 2);
 8. 
    * **p = mat + 1;** - Salva no ponteiro o endereço da segunda posição do vetor.
 
    * **x = (*mat)++;** - Salva o elemento da primeira posição do vetor e faz um incremento no original
9. 
   1.O programa printa os valores de cada elemento do vetor, acessando a partir do endereço da primeira posição e deslocando a direita.
   2.O programa imprime o endereço de cada posição do vetor em hexadecimal.
10.
  * x for declarado como char? 	4093,4094,4095
  * x for declarado como int?		4094,4096,4098
  * x for declarado como float?	4096,4100,4104
  * x for declarado como double?	4100,4108,4116
11. 
``` cpp
int main(){
 char w[4];
 int x[4];
 float y[4];
 double z[4];
 int i;
 printf("Tipo char: \n");
 for(i=0;i<4;i++){
   printf("w+ %d:  %d ",i,w+i);
 }
 printf("\n Tipo int: \n");
 for(i=0;i<4;i++){
   printf("x+ %d:  %d ",i,x+i);
 }
 printf("\n Tipo float: \n");
 for(i=0;i<4;i++){
   printf("y+ %d:  %d ",i,y+i);
 }
 printf("\n Tipo double: \n");
 for(i=0;i<4;i++){
   printf("z+ %d:  %d ",i,z+i);
 }
}

```
- **Saída**

  ![readme1](https://user-images.githubusercontent.com/30416594/54967836-65ca0c00-4f57-11e9-95a8-3904d1fb4ab0.png)
  
12. 
- [x] aloha[2] = value;
- [x] scanf("%f", &aloha);
- [ ] aloha = value; (Atribuição indevida de um vetor a uma variavel)
- [x] printf("%f", aloha);
- [x] coisas[4][4] = aloha[3];
- [ ] coisas[5] = aloha; (Atribuição indevida de um vetor a uma variavel)
- [ ] pf = value; (Atribuição indevida de um numero a um ponteiro)
- [x] pf = aloha;

13. Da mesma forma que podemos criar um ponteiro para acessar o endereço de uma variável, podemos referenciar uma função a partir de um ponteiro, assim, não precisando escrever o nome da função em todo o código e também podendo usar ela como argumento de uma outra função. Por exemplo:

``` cpp
 int produto(int a, int b)
{ return (a*b); }

int operacao (int x, int y, int (*funcao)(int,int))
{
 int g;
 g = (*funcao)(x,y);
 return (g);
}


int main ()
{
 int m,n;
 int (*x)(int,int) = produto;
 m = x(2,5);
 n = operacao(2, 5, x);
 cout << m << " " << n;
 return 0;
}
```
http://www.cplusplus.com/doc/tutorial/pointers/
https://www.inf.pucrs.br/~pinho/PRGSWB/PonteirosParaFuncoes/PonteirosParaFuncoes.html

14.
``` cpp

#include <iostream>
#include <cstdlib>
#include <stdlib.h>
using namespace std;
void bolha(float*,int);
void mostraVetor(float*, int);


void bolha(float *vetor, int tamanho) {
   int temp = 0;
   bool trocou = false;
   for (int i=tamanho-1;i>=1;i--){
       for (int j=1; j<tamanho; j++) {
           if (*(vetor+j)<*(vetor+(j-1))){
               temp = *(vetor+j);
               *(vetor+j)=*(vetor+(j-1));
               *(vetor+(j-1))=temp;
               trocou = true;
           }
       }
       if (!trocou)
           break;
   }
}

void mostraVetor(float *vet, int n){
   for (int i=0;i<n;i++)
       cout << *(vet+i) << " ";
}

void EntradaNumeros(){
   int n;
   float *p;
   do{
   cout << "Entre com o numero de elementos:" << endl;
   cin >> n;
   }while(n<0);
   p = (float *)malloc(n*sizeof(float));
           for(int i = 0; i < n; i++){
       cout << "Entre com o elemento de numero "<< i << " :"<<endl;
       cin >> *(p+i);
   }
  cout << "O vetor foi preenchido assim: " <<endl;
  mostraVetor(p,n);
  cout << endl << endl << "Depois de ordenado: ";
  bolha(p,n);
  mostraVetor(p,n);
  free(p);
}
// Programação principal
int main() {
   EntradaNumeros();
   return 0;
}


```

15.

``` cpp
int comparefloat (const void * a, const void * b) // função necessária para qsort() fazer a comparação.
{
  if ( *(float*)a <  *(float*)b ) return -1; // Se o primeiro elemento for menor que o segundo, retorna -1
  if ( *(float*)a == *(float*)b ) return 0; // Se o primeiro elemento for igual ao segundo, retorna 0
  if ( *(float*)a >  *(float*)b ) return 1; // Se o primeiro elemento for maior que o segundo, retorna 1
}



void mostraVetor(float *vet, int n){ // Função para imprimir o elementos.
    for (int i=0;i<n;i++)  cout << *(vet+i) << " "; 
    // Um laço de for que a partir do endereço do primeiro elemento e com sua quantidade máxima, vai deslocando 
    // de um em um em sua posição.
}

void EntradaNumeros(){
    int n;
    float *p;
    do{ 
        cout << "Entre com o numero de elementos:" << endl;
        cin >> n;
    }while(n<0);
    p = (float *)malloc(n*sizeof(float)); // alocando na memória o espaço necessário 
                                            //para o número de elementos pedido pelo usuário
    for(int i = 0; i < n; i++){ 
        cout << "Entre com o elemento de numero "<< i << " :"<<endl;
        cin >> *(p+i);
    }
   cout << "O vetor foi preenchido assim: " <<endl;
   mostraVetor(p,n);
   cout << endl << endl << "Depois de ordenado: ";
   qsort(p,n,sizeof(float), comparefloat);
   mostraVetor(p,n);
   free(p); // liberando o espaço que foi alocado
}
// Programação principal
int main() {
    EntradaNumeros();
    return 0;
}

```
16. 
``` cpp
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
using namespace std;
void bolha(float*,int, int (*compara)(float* a, float* b));
void mostraVetor(float*, int);
int comparefloat (float* a, float * b);


int comparefloat (float* a, float* b) // função necessária para qsort() fazer a comparação.
{
  if ( *(float*)a <  *(float*)b ) return -1; // Se o primeiro elemento for menor que o segundo, retorna -1
  if ( *(float*)a == *(float*)b ) return 0; // Se o primeiro elemento for igual ao segundo, retorna 0
  if ( *(float*)a >  *(float*)b ) return 1; // Se o primeiro elemento for maior que o segundo, retorna 1
}

void bolha(float *vetor, int tamanho, int (*compara)(float* a, float* b)) {
   int temp = 0;
   bool trocou = false;
   for (int i=tamanho-1;i>=1;i--){
       for (int j=1; j<tamanho; j++) {
           if ((compara((vetor+(j-1)),(vetor+j) )) == 1 ){
               temp = *(vetor+j);
               *(vetor+j)=*(vetor+(j-1));
               *(vetor+(j-1))=temp;
               trocou = true;
           }
       }
       if (!trocou)
           break;
   }
}

void mostraVetor(float *vet, int n){
   for (int i=0;i<n;i++)
       cout << *(vet+i) << " ";
}

void EntradaNumeros(){
   int n;
   float *p;
   do{
   cout << "Entre com o numero de elementos:" << endl;
   cin >> n;
   }while(n<0);
   p = (float *)malloc(n*sizeof(float));
           for(int i = 0; i < n; i++){
       cout << "Entre com o elemento de numero "<< i+1 << " :"<<endl;
       cin >> *(p+i);
   }
  cout << "O vetor foi preenchido assim: " <<endl;
  mostraVetor(p,n);
  cout << endl << endl << "Depois de ordenado: ";
  bolha(p,n,comparefloat);
  mostraVetor(p,n);
  free(p);
}
// Programação principal
int main() {
   EntradaNumeros();
   return 0;
}

```
17. 

``` cpp
int main()
{
    srand(time(NULL));
    clock_t intervalo[4];
    double Tempo;
    int n;
    float *p;
    p = (float *)malloc(100000*sizeof(float));
    for(int i = 0; i < 100000; i++)
    {
        *(p+i) = rand() % 100000;
    }
    intervalo[0] = clock();
    bolha(p,10000,comparefloat_1);
    intervalo[1] = clock();
    Tempo = (intervalo[1] - intervalo[0]) * 1000.0 / CLOCKS_PER_SEC;

    cout << "Tempo gasto pelo meu programa: " << Tempo << " ms." << endl;

    for(int i = 0; i < 100000; i++)
    {
        *(p+i) = rand() % 100000;
    }

    intervalo[3] = clock();
    qsort(p,100000,sizeof(float), comparefloat);
    intervalo[4] = clock();
    Tempo = (intervalo[4] - intervalo[3]) * 1000.0 / CLOCKS_PER_SEC;
    cout << "Tempo gasto pelo qsort(): " << Tempo << " ms." << endl;
    free(p);
    return 0;
}
```
* Saída

  ![pa1](https://user-images.githubusercontent.com/30416594/55027012-fd287100-4fe2-11e9-9a9c-d8ff8ac0470d.png)
  
18.
``` cpp
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
using namespace std;
void mostraVetor(float*, int);
void somaVetor(float* u, float* v, float* w, int n);

void somaVetor(float* u, float* v, float* w, int n){
for(int i = 0; i <n ; i++){
    *(w+i) = *(u+i) + *(v+i);
}
}



void mostraVetor(float *vet, int n){
   for (int i=0;i<n;i++)
       cout << *(vet+i) << " ";
}



int main()
{

    int n;
    float *u,*v,*w;
    cout << "Digite o tamanho dos vetores: " << endl;
    cin >> n;
    u = (float *)malloc(n*sizeof(float));
    v = (float *)malloc(n*sizeof(float));
    w = (float *)malloc(n*sizeof(float));
    for(int i = 0; i< n; i++){
        cout << "Digite o elemento " << (i+1) << "do primeiro vetor: " <<endl;
        cin >> *(u+i);
    }
     for(int i = 0; i< n; i++){
        cout << "Digite o elemento " << (i+1) << "do segundo vetor: " <<endl;
        cin >> *(v+i);
    }
     somaVetor(u,v,w,n);
    cout << "O terceiro vetor ficou assim: " << endl;
    mostraVetor(w,n);
    free(u);
    free(v);
    free(w);
    return 0;
}

``` 
19.
``` cpp
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
using namespace std;
void mostraMatriz(int** a, int nl, int nc){
    for(int i = 0; i<nl; i++){
        for(int j = 0; j<nc; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void produto(int**a,int** b,int** c, int nla, int nca,int ncb){
    int temp;
    for(int i = 0; i< nla; i++){
        for(int j = 0; j<ncb; j++){
            temp = 0;
            for(int k  = 0 ; k<nca;k++){
                temp = temp + a[i][k] * b[k][j];
            }
            c[i][j] = temp;
        }
    }
}

int main(){
    int **A, **B,**C;
    int nlA=2, ncA=2,nlB=2, ncB=2, i, j;
    const int nlC = nlA, ncC = ncB;
    A=(int**) malloc(nlA*sizeof(int*));
    B=(int**) malloc(nlB*sizeof(int*));
    C=(int**) malloc(nlC*sizeof(int*));
    
    for(i=0; i<nlA; i++){
        A[i]=(int*) malloc(ncA*sizeof(int));
    }
    for(i=0; i<nlB; i++){
        B[i]=(int*) malloc(ncB*sizeof(int));
    }
    for(i=0; i<nlC; i++){
        C[i]=(int*) malloc(ncC*sizeof(int));
    }
    srand(time(0));
    
    for(i=0; i<nlA; i++){
        for(j=0; j<ncA; j++){
            A[i][j] = rand()%10;
        }
    }
    
    for(i=0; i<nlB; i++){
        for(j=0; j<ncB; j++){
            B[i][j] = rand()%10;
        }
    }
    
    cout << "matriz A: " << endl;
    mostraMatriz(A,nlA,ncA);
    cout << "matriz B: " << endl;
    mostraMatriz(B,nlB,ncB);
    produto(A,B,C,nlA,ncA,ncB);
    cout << "matriz C: " << endl;
    mostraMatriz(C,nlC,ncC);
    
    for(i=0; i<nlA; i++){
        free(A[i]);
    }
    for(i=0; i<nlB; i++){
        free(B[i]);
    }
    for(i=0; i<nlC; i++){
        free(C[i]);
    }
    free(A);
    free(B);
    free(C);
    
    return 0;
}


``` 

20.

21.
