#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(int argc, char *argv[]){
 setlocale(LC_ALL, "Portuguese");
 
 int n;
 float raio, volume;
 	system("color 3f");
 	for(n=1;n<=10;n++){
	printf("\n%d� Calculo", n);
	printf("\nInsira o valor em cent�metros correspondente ao raio: \n");
	scanf("%f",&raio);
	volume = 4 * 3.14 * (pow(raio,3)) / 3;
	printf("\nO volume da esfera � : %2.f cm�\n",volume);
}
	return 0;
	
}
