#include <iostream>
#include <cmath>
#include <math.h>       /* cos */
#include <string>
#include <sstream>
#include <fstream> 
using namespace std;

double g=10;
double v0=300;

double pos_x(double x0,double v0, double ang, double t)
	{
		return x0 + v0*cos(ang)*t;
	}

double pos_y(double y0,double v0, double ang, double t)
	{
		return y0 + v0*sin(ang)*t-5*t*t;
	}

double velocidad(double v0,double ang,double t)
	{
		return sqrt( pow(v0*cos(ang),2) + pow(v0*sin(ang)-g*t,2) );
	}

double aceleracion(double velocidad)
	{
		return -g-velocidad*velocidad;
	}

int main()
	{	
		double x0=0;
		double y0=0;
		double v0=300;
		double ang=45;
		double h=0.525;
		
		ofstream outFile; 
		outFile.open("proyectil.txt");

		for (int t=0; t<=2*v0*sin(ang)/g; t++)
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
		return 0;
	}





