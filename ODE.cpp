#include <iostream>
#include <cmath>
#include <math.h>       /* cos */
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


double vel_y(double v0, double ang, double t)
{
	return v0*sin(ang)-g*t;
}
double velocidad(double v0,double ang, double vel_y)
{
	return sqrt(v0*cos(ang)*v0*cos(ang)+vel_y*vel_y);
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
	double h=2;
	

	for (int t=0; t<=2*v0*sin(ang)/g; t++)
	{
	double k1_posx=pos_x(x0,v0,ang,t);
	double k1_posy=pos_y(y0,v0,ang,t);
	double k1_vely=vel_y(v0,ang,t);
	double k1_vel=velocidad(v0, ang, k1_vely);
	double k1_ac=aceleracion(k1_vel);


	double k2_posx=pos_x(x0+h*k1_posx/2.0,v0,ang,t+h/2.0);
	double k2_posy=pos_y(y0+h*k1_posy/2.0,v0,ang,t+h/2.0);
	
	double k3_posx=pos_x(x0+h*k2_posx/2.0,v0,ang,t+h/2.0);
	double k3_posy=pos_y(y0+h*k2_posy/2.0,v0,ang,t+h/2.0);
	
	double k4_posx=pos_x(x0+h*k3_posx,v0,ang,t+h);
	double k4_posy=pos_y(y0+h*k3_posy,v0,ang,t+h);

	double rx=x0+h*(k1_posx+2.0*k2_posx+2.0*k3_posx+k4_posx)/6.0;
	double ry=y0+h*(k1_posy+2.0*k2_posy+2.0*k3_posy+k4_posy)/6.0;	
	cout << rx << " " << ry << " " << endl;

	}
	
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

