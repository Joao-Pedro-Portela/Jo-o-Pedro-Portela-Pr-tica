#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {

    setlocale(LC_ALL, "Portuguese");
    
    int i , j ,vet[9], cont;
    
    
    for(i = 0; i < 9 ; i++){
    	printf("Insira um número inteiro: \n");
    	scanf("%d", &vet[i]);
	}
	
  for(i = 0; i < 9 ; i++){
  	
  	cont = 0;
  	
  	for(j = 1; j <= vet[i]; j++ ){
  		if(vet[i] % j == 0){
  		cont++;	
		  }
}
                    	
  	
  	
 	if(cont == 2){
 	printf("O %d é primo \n", vet[i]);	
	 } 	
  	else{
  		printf("O %d não é primo \n", vet[i]);
	  }
  	
  }
  return 0;
}
