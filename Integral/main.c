/*
 * main.c
 *
 *  Created on: 2 de jul de 2022
 *      Author: Rodrigo Printes
 *
 */

#include <stdio.h>
#include "integral.h"


double polinomio2grau(double x , double grau, FX_ *Ptr_Function){
	return  (*Ptr_Function)(x,grau);
}
void printF(){
	printf(">>>HEHEHYE\n");
}
double potencia(double b, double e){
	int i;
	double r = 1;

	if (e >= 1){
	for (i = 0; i < e; i++)
		r *= b;
	}
	return r;
}
int main(int argc, char **argv) {
	FX_ *PtrPow = potencia;
	Fx_polinomio *Ptr_Function = polinomio2grau;


	double s = integral_Trapezio(1, 10, Ptr_Function, 2,PtrPow);

	printf("%f ",s);

	return 0 ;
}
