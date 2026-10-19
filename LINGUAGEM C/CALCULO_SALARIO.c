#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


    float calcSalRec(float n_hr, float s_min){
    	float hr_tra , s_brt , imp , sal_r;
    	hr_tra = s_min /2.0;
    	s_brt = n_hr * hr_tra; 
    	imp =  s_brt * 3 / 100;
    	sal_r = s_brt - imp;
    	return sal_r;
	}
	
	int main(int argc ,char *argv[]){
		
	setlocale(LC_ALL, "Portuguese");	
		
	float Horas, Minimo , Sala_recebido; 	
		
	printf("Informe o número de horas: \n");	
	scanf("%f", &Horas);	
	printf("Digite o Salário Minímo: \n");	
	scanf("%f", &Minimo);	
		
	Sala_recebido = calcSalRec(Horas , Minimo);	
		
	printf("O Salário Recebido foi de R$ %.2f", Sala_recebido);
		
		
	}
