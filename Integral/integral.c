/*
 * integral.cc
 *
 *  Created on: 2 de jul de 2022
 *      Author: Rodrigo Printes
 *      implementação da ADT Integral
 *
 */

#include "integral.h"
//T(fx) = [f(a) - f(b)(b-a)]/2


/*
 * Parametros
 *
 * FX função a ser integrda
 * */


/*
 * Metodos
 * */

double integral_Trapezio(double a, double b , Fx_polinomio *Ptr_Function, double grau, FX_ *PtrPow){

	printf(">> %.2f \n",((*Ptr_Function)(b, grau,PtrPow)));
	printf(">> %.2f \n",((*Ptr_Function)(a, grau,PtrPow)));
	printf(">> %.2f \n",(b-a));


	return ( ( (*Ptr_Function)(b, grau,PtrPow) - (*Ptr_Function)(a, grau,PtrPow)  ) * ( b - a ) )/2;

}


