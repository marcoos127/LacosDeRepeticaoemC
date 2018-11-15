#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]){
	setlocale(LC_ALL,"Portuguese");
	
	int numret;
	float a,b,area;
	numret = 1;
	
	while(numret <= 10){
	
	printf ("\nDigite a base do retangulo: ");
	scanf ("%f", &b);
	printf ("\nDigite a altura do retangulo: ");
	scanf ("%f", &a);
	area = b * a;
	printf ("\nA area do seu retangulo e de: %f",area);
	
	printf("\nDigite o numero do retangulo: 2 a 10\n");
	scanf ("%d", &numret);
	
}
	return 0;
}
