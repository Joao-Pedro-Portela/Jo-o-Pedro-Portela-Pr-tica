#include <stdio.h>
 #include <string.h> 
 #include <locale.h>

 
 #define TAM 3
 
 struct tipo_pessoa{
  char nome[50];
 int idade; 	
 float peso;
 float altura;		
};
 
typedef struct tipo_pessoa tipo_pessoa; 
 
 
 
 
 int main(){
 	

setlocale(LC_ALL, "Portuguese");


 tipo_pessoa informacoes[TAM];
 int i;
 
 for(i = 0 ; i < TAM; i++){
 	printf("informe o nome da %dº pessoa: \n", i+1);
 	//scanf("%<tam.-1>[^\n]s", <str>);
 	scanf("%49[^\n]s", informacoes[i].nome);
 fflush(stdin);
 	
 	printf("informe a idade da %dº pessoa: \n", i+1);
 	scanf("%i", &informacoes[i].idade);
 	fflush(stdin);
 	
 	printf("informe o peso da %dº pessoa:\n", i+1);
 	scanf("%f", &informacoes[i].peso);
    fflush(stdin);
 	
  	printf("informe a altura da %dº pessoa:\n", i+1);
  	scanf("%f", &informacoes[i].altura);
	fflush(stdin);
 	  	puts("");
 
}
 	puts("Dados informados:");

 for(i = 0 ; i < TAM; i++){
 	puts("______________________________");
 	printf("Nome pessoa %d: %s \n",i+1,informacoes[i].nome);
 	printf("Idade pessoa %d: %d \n", i+1, informacoes[i].idade);
 	printf("peso pessoa %d: %.2f \n", i+1, informacoes[i].peso);	
  	printf("altura pessoa %d: %.2f \n", i+1, informacoes[i].altura);	
  	puts("______________________________");
 }


 
 

}
