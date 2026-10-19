#include <stdio.h>
 
int main() {
 int N, horas,minutos,segundos;
 
 scanf("%d", &N);
 
 horas = N/3600;
 N %= 3600;
 
 minutos = N/60;
 N %= 60;
 
 segundos = N;
 
 printf("%d:%d:%d\n",horas,minutos,segundos);
 
 
   
 
    return 0;
}
