#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

 float lucrov(float valor_carro, float Lucro_Vendedor){
 	return valor_carro * Lucro_Vendedor/100;
 	}
 float impostov(float valor_carro, float imps ){
 	return valor_carro * imps/100;
 }	
 float valor_carro(float valor_carro, float imps, float Lucro_Vendedor){
 	    	return valor_carro + imps + Lucro_Vendedor;
 	}
 
 int main( int argc, char *argv[]){
 	
 	float vendedor, imposto_dito , Carro_valor, calc_lucro, calc_imposto, Final ;
 	
 	printf("Quanto foi o lucro do vendedor(porcentagem) \n");
 	scanf("%f",&vendedor );
 	printf("Informe o valor do imposto(porcentagem) \n");
 	scanf("%f", &imposto_dito);
 	printf("Digite o valor do carro: \n");
 	scanf("%f", & Carro_valor);
 	
 	calc_lucro = lucrov( Carro_valor, vendedor );
 	calc_imposto = impostov(Carro_valor, imposto_dito);
 	Final = valor_carro(Carro_valor, calc_imposto, calc_lucro );
 	
 	
 	printf("Lucro do vendedor R$ %.2f \n", calc_lucro);
 	printf("Valor do imposto R$ %.2f \n", calc_imposto);
 	printf("Valor final do carro R$%.2f \n", Final);
 	
}
