#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {
	
	int i = 0, j;
	int alunos;
	float media;
	
	printf("Quanos alunos?\n ");
	scanf("%d",&alunos);
	fflush(stdin);
	
	char Nomes[alunos][50];
	float notas[alunos][3];
	
	while(i < alunos){
		printf("Nome do %d aluno:\n",i + 1 );
		fgets(Nomes[i],50,stdin);
		fflush(stdin);
		
		for(j = 0; j < 3; j++){
			printf("Nota %d do %d aluno\n", j + 1,i+1);
			scanf("%f",&notas[i][j]);
		fflush(stdin);
}
	puts("");	
	i++;
}


	for(i = 0; i < alunos; i++){
	
	puts("----------------------------------");
	media = 0;
	
	
	media = ((notas[i][0] * 2) + (notas[i][1] * 3) +(notas[i][2] * 5))/10;
		
		
	printf("Nome do %d aluno: %s\n" , i + 1,Nomes[i]);	
	printf("Media do %d aluno: %.2f",i + 1,media);		
		puts("");
	}

return 0;
}
