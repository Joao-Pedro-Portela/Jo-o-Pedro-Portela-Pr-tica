#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


	void calckw(float V_sal, float q_Kw, float *V_kw, float *V_re, float *v_des ){
		*V_kw = V_sal / 1000;
		*V_re = *V_kw * q_Kw;
		*v_des = *V_re * 0.85;
		
		
		
		
		
	} 


int main(int argc, char *argv[]) {
	
setlocale(LC_ALL, "Portuguese");

	float Sal_mi,Kw_g, Val_kw, Val_re, Val_desc;


 printf("Insira o valor do salário minímo:");
 scanf("%f", &Sal_mi);
 printf("Insira a quantidade de KW gastos:");
 scanf("%f", &Kw_g);

 calckw(Sal_mi,Kw_g, &Val_kw, &Val_re, &Val_desc);


 printf("Valor de 1 KW em (R$): %.2f \n",Val_kw );
 printf("Valor a ser pago pela residência em (R$): %.2f \n", Val_re);
 printf("Valor com desconto em (R$): %.2f", Val_desc);



}
