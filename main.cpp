#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "tComplexos.h"

using namespace std;

struct complexo x, y, *resultado;

void entrada(char opcao)
{  
  if (opcao == '5'){
        printf("\nDigite um número complexo:\n\n");
        leiaComplexo(&x); 
      }
      
      else{
        printf("\nDigite o primeiro número complexo:\n\n");
        leiaComplexo(&x);
        printf("\nDigite o segundo número complexo:\n\n");
        leiaComplexo(&y);
      }
}

void saida (char op2)
{
  printf("\nResultado: ");
  escrevaComplexo(op2, resultado);
  printf("\n\n\n");
          
}

int main ()
{  
  bool op=true;
  char opcao, op2;  
  
  inicio:

  while (op){
  printf("\n\nEscolha a opção desejada para operações com números complexos:\n\n");
  printf("1 - Soma \n2 - Subtração \n3 - Multiplicação \n4 - Divisão \n5 - Modulo \n6 - SAIR\n\n");
  cin >> opcao;
  op2 = 'n';

  switch (opcao) {
      case '1':
          printf("\nSoma:\n");
          entrada(opcao);
          resultado = somaComplexos(&x, &y);
          saida(op2);
          break;
      case '2':
          printf("\nSubtração:\n");
          entrada(opcao);
          resultado = subtracaoComplexos(&x, &y);
          saida(op2);
          break;
      case '3':
          printf("\nMultiplicação:\n");
          entrada(opcao);
          resultado = multiplicacaotComplexos(&x, &y);
          saida(op2);
          break;
      case '4':
          printf("\nDivisão:\n");
          entrada(opcao);
          resultado = divisaoComplexos(&x, &y);
          saida(op2);
          break;
      case '5':
          op2 = 'm';
          printf("\nModulo:\n");
          entrada(opcao);
          resultado = moduloComplexos(&x);
          saida(op2);
          break;
      case '6':
          printf("\nVocê pediu para sair.\n");
          op=false;
          break;
      default:
          printf("\nVocê deve escolher uma opção valida.\n");
          goto inicio;
  }
}

  return 0;
}