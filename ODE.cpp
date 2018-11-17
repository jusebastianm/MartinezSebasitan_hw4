#include <iostream>
#include <cmath>
#include <math.h>       /* cos */
using namespace std;



double g=10;
double v0=300;

double t(double v0, double ang)
{
	return v0*sin(ang)/g;
}

double pos_x(double x0,double v0, double ang, double t)
{
	return x0 + v0*cos(ang)*t;
}

double pos_y(double y0,double v0, double ang, double t)
{
	return y0 + v0*sin(ang)*t-5*t*t;
}


double vel_x(double v0, double ang)
{
	return v0*cos(ang);
}

double vel_y(double v0, double ang, double t)
{
	return v0*sin(ang)-g*t;
}
double velocidad(double vel_x,double vel_y)
{
	return sqrt(vel_x*vel_x+vel_y*vel_y);
}

double aceleracion(double velocidad)
{
	return -g-velocidad*velocidad;
}


int main()
{	
	
		
	return 0;
}





/*double k1_v=velocidad(x0,y0,v0);
	double k1_a=aceleracion(k1_v);

	double k2_v=velocidad(x0+h/2,y0+h*k1_v/2,v);
	double k2_a=aceleracion(k2_v);

	double k3_v=velocidad(x0+h/2,y0+h*k2_v/2,v);
	double k3_a=aceleracion(k3_v);
	
	double k4_v= velocidad(x0+h,y0+h*k3_v,v0);
	double k4_a= aceleracion(k4_v);


		double rx=x0+h;
	double ry=y0+h*(k1_v+2*k2_v+2*k3_v+k4_v)/6;		
	double ra=v+h*(k1_a+2*k2_a+2*k3_a+k4_a)/6;	*/

