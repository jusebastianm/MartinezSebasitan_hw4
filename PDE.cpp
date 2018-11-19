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

	//Constantes de la roca DE Calcita
	
	double area_roca=pow(0.5,2.0);
	double k=1.62;
	double Cp=820;
	double den=0.00000271;
	double v=k/(Cp*den);
	double lado_roca=50;
	
	int espacios=100;
	double division_roca=lado_roca/espacios;
	

	
	// Constante utilizada en el libro de Landau

	double eta=(k)/(pow(division_roca,2)*Cp*den);
	
	//____________________________________________________________________________________________________________


	
	//Creo la situacion inicial
	int i;
	int j;
	double dx=0;
	double dy=0;
	double roca[espacios][espacios];
	double centro_roca= 50/2.0;
	

	
	for (int i=1;i<=espacios;i++)
	{
		for (int j=1;j<=espacios;j++)
		{
			int ecu_circulo=pow(i*50/100-centro_roca,2)+pow(j*50/100-centro_roca,2);
			
			if(sqrt(ecu_circulo)< centro_roca)
	    		{
				roca[i][j]=100;
	   		}
		
			
	  	}
	}
	return 0;
}





