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

int main()
{	
	//____________________________________________________________________________________________________________

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
	double lado_roca=0.5;
	
	int espacios=100;
	double division_roca=lado_roca/espacios;
	

	double roca[espacios][espacios];
	// Constante utilizada en el libro de Landau

	double eta=(k)/(pow(division_roca,2)*Cp*den);
	
	//____________________________________________________________________________________________________________


	
	//Creo la situacion inicial
	int i;
	int j;
	for(int i=0;i<espacios;i++)
	{
		for(int j=0;j<espacios;j++)
		{
			division_roca=((i*division_roca)-lado_roca/2)*((i*division_roca)-lado_roca/2);
			division_roca=((j*division_roca)-lado_roca/2)*((j*division_roca)-lado_roca/2);
			if(sqrt(division_roca+division_roca)<0.05)
			{
				roca[i][j]=100;
			}
			else
			{
				roca[i][j]=10;
			}
		}
	}

	ofstream inicio;
	inicio.open("iniciales.txt");
	for(int i=0;i<espacios;i++)
	{
		for(int j=0;j<espacios;j++)
		{
			inicio<<roca[i][j]<<endl;
			if(j==(espacios-1))
			{
				inicio<<roca[i][j]<<endl;
			}
		}
	}
	inicio.close();
	
	return 0;
}





