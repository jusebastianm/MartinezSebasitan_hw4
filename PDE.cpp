#include <iostream>
#include <cmath>
#include <math.h>    
#include <string>
#include <sstream>
#include <fstream> 
#include <stdio.h>
#include <stdlib.h>
using namespace std;

#define pi 3.14159265359;

double dia_cir = 0.1;
double area_cir=pow(dia_cir/2.0,2.0)*pi;
double t_cir=373.15;

double area_roca=pow(0.5,2.0);
double k=1.62;
double Cp=820;
double den=2710;
double v=k/(Cp*den);

double lado_roca=50;
double avance_lado=0.01;


double dt=(pow(avance_lado,2))/(4*v);
double tmax=101;
double a=(v*dt)/(pow(avance_lado,2));


void caso1_fijas(double a, double tmax);
void caso2_abiertas(double a, double tmax);
void caso3_periodicas(double a, double tmax);


void caso1_fijas(double a, double tmax)
{

}

void caso2_abiertas(float a, int tmax)
{
  
}

void caso3_periodicas(float a, int tmax)
{
 
}


int main()
{
	

/*	caso1_fijas(a, tmax);
	caso2_abiertas(a, tmax);
	caso3_periodicas(a, tmax);
*/

	return 0;
}





