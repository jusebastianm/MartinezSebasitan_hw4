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





double iniciales(double lado_roca, int espacios, double division_roca)
{
	
	double avance_horizontal=0;
	double avance_vertical=0;
	int i;
	double roca_pasado[espacios][espacios];
	for(int i=0; i < espacios; i++)
	{
		for(int j=0;j<espacios;j++)
		{
			avance_horizontal=((i*division_roca)-espacios*lado_roca/2)*((i*division_roca)-espacios*lado_roca/2);
			avance_vertical=((j*division_roca)-espacios*lado_roca/2)*((j*division_roca)-espacios*lado_roca/2);
			if(sqrt(avance_horizontal+avance_vertical)<5)
			{
				roca_pasado[i][j]=100;
			}
			else
			{
				roca_pasado[i][j]=10;
			}
		}
	}



	for(int i=0;i<espacios;i++)
	{
		for(int j=0;j<espacios;j++)
		{
			return roca_pasado[i][j];
			if(j==(espacios-1))
			{
				return roca_pasado[i][j];
			}
		}
	}
	
}

/*
double caso1_fijos(int espacios)
{
	int i;
	int j;
	double roca_pasado[espacios][espacios];
	double roca_futuro[espacios][espacios];
	
	for(int i=0;i<espacios;i++)
	{	
		
		for(int j=0;j<espacios;j++)
		{
			cout<<roca_pasado[i][j]<<endl;
			if(j==(espacios-1))
			{
				cout<<roca_pasado[i][j]<<endl;
			}
		}
		
		
	}
	
}

*/
int main()
{	
		
	//Constantes del circulo - varilla
	double dia_cir = 0.1;
	double area_cir=pow(dia_cir/2.0,2.0)*pi;
	double t_cir=373.15;

	//Constantes de la roca
	
	double area_roca=pow(0.5,2.0);
	double k=1.62;
	double Cp=820;
	double den=2710;
	double v=k/(Cp*den);
	double lado_roca=50;
	
	int espacios=100;
	double division_roca=lado_roca/espacios;

	double clave=(k)/(pow(division_roca,2)*Cp*den);
	
	
	ofstream outFile; 
	outFile.open("inicio.txt");
	outFile << iniciales(lado_roca,espacios, division_roca) << endl;
	outFile.close();
	
	return 0;
}





