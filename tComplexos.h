#include <math.h>

struct complexo
{
    double real;
    double imaginario;    
};

void inicializaComplexo(struct complexo *nc)
{
    nc->real = 0;
    nc->imaginario = 0;
}

void leiaComplexo(struct complexo *nc)
{
    printf("Parte real: ");
    scanf("%lf", &nc->real);
    printf("Parte imaginaria: ");
    scanf("%lf", &nc->imaginario);
}

void escrevaComplexo(char opcao, struct complexo *nc)
{
    if (opcao == 'm'){
        printf("%lf", nc->real);
      }
      
    else{
      if(nc->imaginario < 0 ){
        if(nc->real == 0 ){
          printf("%lf i", nc->imaginario);
         }  
          else{
            printf("%lf %lf i", nc->real, nc->imaginario);
          }        
        }
      
      if(nc->imaginario == 0 ){
        if(nc->real == 0 ){
          printf("0");
         }  
          else{
            printf("%lf", nc->real);
          }        
        }
        
      if(nc->imaginario > 0 ){
        if(nc->real == 0 ){
          printf("%lf i", nc->imaginario);
         }  
          else{
            printf("%lf + %lf i", nc->real, nc->imaginario);
          }        
        }            
      }

}

struct complexo* somaComplexos(struct complexo *nc, struct complexo *ncA)
{
    struct complexo *ncR = (struct complexo*)malloc(sizeof(struct complexo));
    ncR->real = nc->real + ncA->real;
    ncR->imaginario = nc->imaginario + ncA->imaginario;
    return ncR;
}

struct complexo* subtracaoComplexos(struct complexo *nc, struct complexo *ncA)
{
    struct complexo *ncR = (struct complexo*)malloc(sizeof(struct complexo));
    ncR->real = nc->real - ncA->real;
    ncR->imaginario = nc->imaginario - ncA->imaginario;
    return ncR;
}

struct complexo* multiplicacaotComplexos(struct complexo *nc, struct complexo *ncA)
{
    struct complexo *ncR = (struct complexo*)malloc(sizeof(struct complexo));
    ncR-> real = ((nc->real*ncA->real) + ((nc->imaginario*ncA->imaginario)*(-1)));
    ncR->imaginario = ((nc->real*ncA->imaginario) + (nc->imaginario*ncA->real));
    return ncR;
}

struct complexo* divisaoComplexos(struct complexo *nc, struct complexo *ncA)
{
    struct complexo *ncR = (struct complexo*)malloc(sizeof(struct complexo));
    ncR-> real = ((nc->real * ncA->real) + ((nc->imaginario * (ncA->imaginario*(-1)))*(-1))) / ((ncA->real * ncA->real) + ((ncA->imaginario * (ncA->imaginario*(-1)))*(-1)));   
    ncR-> imaginario = ((nc->real * (ncA->imaginario*(-1))) + (nc->imaginario * ncA->real)) / ((ncA->real * ncA->real) + ((ncA->imaginario * (ncA->imaginario*(-1)))*(-1)));
    return ncR;
}

struct complexo* moduloComplexos(struct complexo *nc)
{
    struct complexo *ncR = (struct complexo*)malloc(sizeof(struct complexo));
    ncR->real = sqrt((nc->real*nc->real) + (nc->imaginario*nc->imaginario));
    return ncR;
}