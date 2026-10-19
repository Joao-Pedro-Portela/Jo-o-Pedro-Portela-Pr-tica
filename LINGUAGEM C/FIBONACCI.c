#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {

  setlocale(LC_ALL, "Portuguese");
     
    int i,atual, antg = 0; 
    int novo = 1; 
    int n;
    
    printf("Até qual termo da sequência Fibonacci você quer?: \n ");
    scanf("%d", &n);
    printf("%d ", antg);
    printf("%d ", novo);
    
    for(i = 1 ; i <=n; i++){
    	
    atual = antg + novo;
    antg = novo;    	
    novo = atual;	
    	
    printf("%d ", atual);	
    	
    	
 	}
   
    
    
  return 0;  
}
