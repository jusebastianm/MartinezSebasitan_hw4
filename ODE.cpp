#include <iostream>
#include <cmath>
#include <math.h>       /* cos */
#include <string>
#include <sstream>
#include <fstream> 
using namespace std;



double g=10;
double v0=300;
double c=0.2;
double pos_x(double x0,double v0, double ang, double t)
	{
		return  v0*cos(ang)*(1- exp(-c*t))/c;
	}

double pos_y(double y0,double v0, double ang, double t)
	{
		return (1/c)*((g/c)+v0*sin(ang))*(1-exp(-c*t))-(g*t/c);
	}

double velocidad(double v0,double ang,double t)
	{
		return sqrt( pow(v0*cos(ang)*exp(-c*t),2) + pow(((g/c)+v0*sin(ang))*exp(-c*t)-(g/c),2) );
	}

double aceleracion(double v0, double ang)
	{
		return sqrt( pow(-c*v0*cos(ang),2)+pow(-g-c*v0*sin(ang),2));
	}

int main()
	{	
		double x0=0;
		double y0=0;
		double v0=300;
		double ang=45;
		double h=0.5;
		
		ofstream outFile; 
		outFile.open("proyectil.txt");

		for (int t=0; t<=28.5; t++)
			{
				double k1_posx=pos_x(x0,v0,ang,t);
				double k1_posy=pos_y(y0,v0,ang,t);

				double k2_posx=pos_x(x0+h*k1_posx/2.0,v0,ang,t+h/2.0);
				double k2_posy=pos_y(y0+h*k1_posy/2.0,v0,ang,t+h/2.0);
		
				double k3_posx=pos_x(x0+h*k2_posx/2.0,v0,ang,t+h/2.0);
				double k3_posy=pos_y(y0+h*k2_posy/2.0,v0,ang,t+h/2.0);
	
				double k4_posx=pos_x(x0+h*k3_posx,v0,ang,t+h);
				double k4_posy=pos_y(y0+h*k3_posy,v0,ang,t+h);

				double rx=x0+h*(k1_posx+2.0*k2_posx+2.0*k3_posx+k4_posx)/6.0;
				double ry=y0+h*(k1_posy+2.0*k2_posy+2.0*k3_posy+k4_posy)/6.0;
				
				double vel=velocidad(v0, ang, t);
				outFile << rx << " " << ry << " " << vel << endl;
			}	

		outFile.close();


		double ang2=10;
		double ang3=20;
		double ang4=30;
		double ang5=40;
		double ang6=50;
		double ang7=60;
		double ang8=70;

		ofstream outFile2; 
		outFile2.open("proyectil_2.txt");
		for (int t=0; t<=50; t++)
			{
//_______________________________________________________________________________________________________________________________
//					10 GRADOS 

				double k1_posx_10=pos_x(x0,v0,ang2,t);
				double k1_posy_10=pos_y(y0,v0,ang2,t);

				double k2_posx_10=pos_x(x0+h*k1_posx_10/2.0,v0,ang2,t+h/2.0);
				double k2_posy_10=pos_y(y0+h*k1_posy_10/2.0,v0,ang2,t+h/2.0);
		
				double k3_posx_10=pos_x(x0+h*k2_posx_10/2.0,v0,ang2,t+h/2.0);
				double k3_posy_10=pos_y(y0+h*k2_posy_10/2.0,v0,ang2,t+h/2.0);
	
				double k4_posx_10=pos_x(x0+h*k3_posx_10,v0,ang2,t+h);
				double k4_posy_10=pos_y(y0+h*k3_posy_10,v0,ang2,t+h);

				double rx_10=(x0+h*(k1_posx_10+2.0*k2_posx_10+2.0*k3_posx_10+k4_posx_10)/6.0)*-1;
				double ry_10=(y0+h*(k1_posy_10+2.0*k2_posy_10+2.0*k3_posy_10+k4_posy_10)/6.0)*-1;
				
				double vel_10=velocidad(v0, ang2, t);

//________________________________________________________________________________________________________________________________
//					20 GRADOS 

				double k1_posx_20=pos_x(x0,v0,ang3,t);
				double k1_posy_20=pos_y(y0,v0,ang3,t);

				double k2_posx_20=pos_x(x0+h*k1_posx_20/2.0,v0,ang3,t+h/2.0);
				double k2_posy_20=pos_y(y0+h*k1_posy_20/2.0,v0,ang3,t+h/2.0);
		
				double k3_posx_20=pos_x(x0+h*k2_posx_20/2.0,v0,ang3,t+h/2.0);
				double k3_posy_20=pos_y(y0+h*k2_posy_20/2.0,v0,ang3,t+h/2.0);
	
				double k4_posx_20=pos_x(x0+h*k3_posx_20,v0,ang3,t+h);
				double k4_posy_20=pos_y(y0+h*k3_posy_20,v0,ang3,t+h);

				double rx_20=x0+h*(k1_posx_20+2.0*k2_posx_20+2.0*k3_posx_20+k4_posx_20)/6.0;
				double ry_20=y0+h*(k1_posy_20+2.0*k2_posy_20+2.0*k3_posy_20+k4_posy_20)/6.0;
				
				double vel_20=velocidad(v0, ang3, t);

				
//________________________________________________________________________________________________________________________________
//					30 GRADOS 

				double k1_posx_30=pos_x(x0,v0,ang4,t);
				double k1_posy_30=pos_y(y0,v0,ang4,t);

				double k2_posx_30=pos_x(x0+h*k1_posx_30/2.0,v0,ang4,t+h/2.0);
				double k2_posy_30=pos_y(y0+h*k1_posy_30/2.0,v0,ang4,t+h/2.0);
		
				double k3_posx_30=pos_x(x0+h*k2_posx_30/2.0,v0,ang4,t+h/2.0);
				double k3_posy_30=pos_y(y0+h*k2_posy_30/2.0,v0,ang4,t+h/2.0);
	
				double k4_posx_30=pos_x(x0+h*k3_posx_30,v0,ang4,t+h);
				double k4_posy_30=pos_y(y0+h*k3_posy_30,v0,ang4,t+h);

				double rx_30=x0+h*(k1_posx_30+2.0*k2_posx_30+2.0*k3_posx_30+k4_posx_30)/6.0;
				double ry_30=y0+h*(k1_posy_30+2.0*k2_posy_30+2.0*k3_posy_30+k4_posy_30)/6.0;
				
				double vel_30=velocidad(v0, ang4, t);
//________________________________________________________________________________________________________________________________
//					40 GRADOS 

				double k1_posx_40=pos_x(x0,v0,ang5,t);
				double k1_posy_40=pos_y(y0,v0,ang5,t);

				double k2_posx_40=pos_x(x0+h*k1_posx_40/2.0,v0,ang5,t+h/2.0);
				double k2_posy_40=pos_y(y0+h*k1_posy_40/2.0,v0,ang5,t+h/2.0);
		
				double k3_posx_40=pos_x(x0+h*k2_posx_40/2.0,v0,ang5,t+h/2.0);
				double k3_posy_40=pos_y(y0+h*k2_posy_40/2.0,v0,ang5,t+h/2.0);
	
				double k4_posx_40=pos_x(x0+h*k3_posx_40,v0,ang5,t+h);
				double k4_posy_40=pos_y(y0+h*k3_posy_40,v0,ang5,t+h);

				double rx_40=x0+h*(k1_posx_40+2.0*k2_posx_40+2.0*k3_posx_40+k4_posx_40)/6.0;
				double ry_40=y0+h*(k1_posy_40+2.0*k2_posy_40+2.0*k3_posy_40+k4_posy_40)/6.0;
				
				double vel_40=velocidad(v0, ang5, t);
//________________________________________________________________________________________________________________________________
//					50 GRADOS 

				double k1_posx_50=pos_x(x0,v0,ang6,t);
				double k1_posy_50=pos_y(y0,v0,ang6,t);

				double k2_posx_50=pos_x(x0+h*k1_posx_50/2.0,v0,ang6,t+h/2.0);
				double k2_posy_50=pos_y(y0+h*k1_posy_50/2.0,v0,ang6,t+h/2.0);
		
				double k3_posx_50=pos_x(x0+h*k2_posx_50/2.0,v0,ang6,t+h/2.0);
				double k3_posy_50=pos_y(y0+h*k2_posy_50/2.0,v0,ang6,t+h/2.0);
	
				double k4_posx_50=pos_x(x0+h*k3_posx_50,v0,ang6,t+h);
				double k4_posy_50=pos_y(y0+h*k3_posy_50,v0,ang6,t+h);

				double rx_50=x0+h*(k1_posx_50+2.0*k2_posx_50+2.0*k3_posx_50+k4_posx_50)/6.0;
				double ry_50=y0+h*(k1_posy_50+2.0*k2_posy_50+2.0*k3_posy_50+k4_posy_50)/6.0;
				
				double vel_50=velocidad(v0, ang6, t);
//________________________________________________________________________________________________________________________________
//					60 GRADOS 

				double k1_posx_60=pos_x(x0,v0,ang7,t);
				double k1_posy_60=pos_y(y0,v0,ang7,t);

				double k2_posx_60=pos_x(x0+h*k1_posx_60/2.0,v0,ang7,t+h/2.0);
				double k2_posy_60=pos_y(y0+h*k1_posy_60/2.0,v0,ang7,t+h/2.0);
		
				double k3_posx_60=pos_x(x0+h*k2_posx_60/2.0,v0,ang7,t+h/2.0);
				double k3_posy_60=pos_y(y0+h*k2_posy_60/2.0,v0,ang7,t+h/2.0);
	
				double k4_posx_60=pos_x(x0+h*k3_posx_60,v0,ang7,t+h);
				double k4_posy_60=pos_y(y0+h*k3_posy_60,v0,ang7,t+h);

				double rx_60=x0+h*(k1_posx_60+2.0*k2_posx_60+2.0*k3_posx_60+k4_posx_60)/6.0;
				double ry_60=y0+h*(k1_posy_60+2.0*k2_posy_60+2.0*k3_posy_60+k4_posy_60)/6.0;
				
				double vel_60=velocidad(v0, ang7, t);
//________________________________________________________________________________________________________________________________
//					70 GRADOS 

				double k1_posx_70=pos_x(x0,v0,ang8,t);
				double k1_posy_70=pos_y(y0,v0,ang8,t);

				double k2_posx_70=pos_x(x0+h*k1_posx_70/2.0,v0,ang8,t+h/2.0);
				double k2_posy_70=pos_y(y0+h*k1_posy_70/2.0,v0,ang8,t+h/2.0);
		
				double k3_posx_70=pos_x(x0+h*k2_posx_70/2.0,v0,ang8,t+h/2.0);
				double k3_posy_70=pos_y(y0+h*k2_posy_70/2.0,v0,ang8,t+h/2.0);
	
				double k4_posx_70=pos_x(x0+h*k3_posx_70,v0,ang8,t+h);
				double k4_posy_70=pos_y(y0+h*k3_posy_70,v0,ang8,t+h);

				double rx_70=x0+h*(k1_posx_70+2.0*k2_posx_70+2.0*k3_posx_70+k4_posx_70)/6.0;
				double ry_70=y0+h*(k1_posy_70+2.0*k2_posy_70+2.0*k3_posy_70+k4_posy_70)/6.0;
				
				double vel_70=velocidad(v0, ang8, t);
				

				
outFile2 << rx_10 << " " << ry_10 << " " << vel_10 << " " << rx_20 << " " << ry_20 << " " << vel_20 << " " << rx_30 << " " << ry_30 << " " << vel_30 << " " << rx_40 << " " << ry_40 << " " << vel_40 << " " << rx_50 << " " << ry_50 << " " << vel_50 << " " << rx_60 << " " << ry_60 << " " << vel_60 << " " << rx_70 << " " << ry_70 << " " << vel_70 << endl;
			}	

		outFile2.close();
		return 0;
	}





