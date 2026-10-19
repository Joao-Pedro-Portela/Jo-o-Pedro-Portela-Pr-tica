#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {

    setlocale(LC_ALL, "Portuguese");
    
    float  n1 ,n2, resultado;
    int Calculo;
    
   printf("Digite 1 para somar \n"); 
   printf("Digite 2 para subtrair \n");  
   printf("Digite 3 para divisão \n"); 
   printf("Digite 4 para multiplicar \n");  
   scanf("%i", &Calculo);
   
   
    
    printf("Insira o Primeiro valor: \n");
    scanf("%f", &n1);
    
    printf("Insira o Segundo valor: \n");
    scanf("%f", &n2);
    
    switch(Calculo){
    	
    case 1:	
    resultado = n1 + n2;	
    printf("O resultado da soma é: %.2f",  resultado);	
    break;
		
    case 2:	
   resultado = n1 - n2;	
    printf("O resultado da Subtração é: %.2f",  resultado);	
    break;	
    	
  case 3: 	
  
     if(n2== 0 ){
   puts("Divisão por 0");
   }
   else{
   resultado = n1 / n2;	
  printf("O resultado da Divisão é: %.2f",  resultado);	

}
 break;
  case 4: 	    	
  resultado = n1 * n2; 	
  printf("O resultado da Multiplicação é: %.2f",  resultado);	
  break;   
    	
    default:
	printf("Opção inválida ");
	break;	
    }
   
	} 
