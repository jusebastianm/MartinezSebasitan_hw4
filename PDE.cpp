//______________________________________________________________________________________________________________
//_____________________________		 TAREA Nº 4 METODOS COMPUTACIONALES 	________________________________
//_____________________________		 CODIGO DE ESTUDIANTE: 201615516 	________________________________
//___________________________________________________________________________________________________________________________________

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
	
	


	//En esta sección deberían ir los generadores de datos de graficas pero no se lograron obtener por ineficiencias del codigo. Aun asi, se pueden evidenciar evidenciar los intentos realizados en github que a final de cuentas no generaron nada. 


	return 0;
}





