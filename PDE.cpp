#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define coeficiente  0.0001
#define delta_distancia  0.01
#define longitud_placa 100



void Caso1_periodicas(float a, int tmax);
void Caso1_abiertas(float a, int tmax);
void Caso1_fijas(float a, int tmax);

void Caso2_abiertas(float a, int tmax);
void Caso2_periodicas(float a, int tmax);
void Caso2_fijas(float a, int tmax);


int main()
{

	float dt=(delta_distancia*delta_distancia)/(4*coeficiente);
	int tmax=101;
	float a=(coeficiente*dt)/(delta_distancia*delta_distancia);

	Caso1_abiertas(a, tmax);
	Caso1_periodicas(a, tmax);
	Caso1_fijas(a, tmax);


	Caso2_abiertas(a, tmax);
	Caso2_periodicas(a, tmax);
	Caso2_fijas(a, tmax);

	return 0;
}



void Caso1_abiertas(float a, int tmax)
{
	int i;
	int j;
	int t;

	float placa[longitud_placa+1][longitud_placa+1];
	for(i=1;i<longitud_placa;i++)
	{
		for(j=1;j<longitud_placa;j++)
		{
			placa[i][j]=50;
   		}
  	}
  	for(i=21;i<(21+11);i++)
	{
		for(j=41;j<(41+21);j++)
		{
			placa[i][j]=100;
    		}
  	}
	for(t=0;t<tmax;t++)
	{
		for(i=1;i<longitud_placa;i++)
		{
			placa[i][0]=placa[i][1];
			placa[i][longitud_placa]=placa[i][longitud_placa-1];
			placa[0][i]=placa[1][i];
			placa[longitud_placa][i]=placa[longitud_placa-1][i];
			for(j=1;j<longitud_placa;j++)
			{
				if(t==0)
				{
					printf("caso_1_abiertas_t0	%d	%d	%d	%f\n",1,i,j, placa[i][j] );
				}
				else if(t==4)
				{
					  printf("caso_1_abiertas_t100	%d	%d	%d	%f\n",2,i,j, placa[i][j] );
				}
				else if(t==100)
				{
					  printf("caso_1_abiertas_t2500	%d	%d	%d	%f\n",3,i,j, placa[i][j] );
				}
			placa[i][j]= a*(placa[i+1][j]+placa[i-1][j]) + a*(placa[i][j+1]+placa[i][j-1])+(1-4*a)*placa[i][j];
      			}
		}
	}
}


void Caso1_periodicas(float a, int tmax)
{
	int i;
	int j;
	int t;

	float placa[longitud_placa+1][longitud_placa+1];
	for(i=1;i<longitud_placa;i++)
	{
		for(j=1;j<longitud_placa;j++)
		{
			placa[i][j]=50;
		}
	}
	for(i=21;i<(21+11);i++)
	{
		for(j=41;j<(41+21);j++)
		{
			placa[i][j]=100;
		}
	}
	for(t=0;t<tmax;t++)
	{
		for(i=1;i<longitud_placa-2;i++)
		{
			placa[i][0]=placa[i][longitud_placa-1];
      			placa[i][longitud_placa]=placa[i][1];
     			placa[0][i]=placa[longitud_placa-1][i];
			placa[longitud_placa][i]=placa[1][i];
		for(j=1;j<longitud_placa-2;j++)
		{
			if(t==0)
			{
	  			printf("caso1_periodica_t0	%d	%d	%d	%f\n",4,i,j, placa[i][j] );
			}
			else if(t==4)
			{
				printf("caso1_periodica_t100	%d	%d	%d	%f\n",5,i,j, placa[i][j] );
			}
			else if(t==100)
			{
				printf("caso1_periodica_t2500	%d	%d	%d	%f\n",6,i,j, placa[i][j] );
			}
				placa[i][j]= a*(placa[i+1][j]+placa[i-1][j]) + a*(placa[i][j+1]+placa[i][j-1])+(1-4*a)*placa[i][j];
      		}
	}	
}


}

void Caso1_fijas(float a, int tmax)
{
	int i;
	int j;
	int t;

	float placa[longitud_placa+1][longitud_placa+1];
	for(i=1;i<longitud_placa;i++)
	{
		for(j=1;j<longitud_placa;j++)
		{
			placa[i][j]=50;
    		}
  	}
	for(i=21;i<(21+11);i++)
	{
		for(j=41;j<(41+21);j++)
		{
			placa[i][j]=100;
    		}
  	}

	for(t=0;t<tmax;t++)
	{
		for(i=1;i<longitud_placa-2;i++)
		{
			placa[i][0]=50;
			placa[i][longitud_placa]=50;
			placa[0][i]=50;
			placa[longitud_placa][i]=50;
			for(j=1;j<longitud_placa-2;j++)
			{
				if(t==0)
				{
					  printf("caso1_fijas_t0	%d	%d	%d	%f\n",7,i,j, placa[i][j] );
				}
				else if(t==4)
				{
					  printf("caso1_fijas_t100	%d	%d	%d	%f\n",8,i,j, placa[i][j] );
				}
				else if(t==100)
				{
					  printf("caso1_fijas_t2500	%d	%d	%d	%f\n",9,i,j, placa[i][j] );
				}
			placa[i][j]= a*(placa[i+1][j]+placa[i-1][j]) + a*(placa[i][j+1]+placa[i][j-1])+(1-4*a)*placa[i][j];
      			}
    		}
  	}	
}



void Caso2_abiertas(float a, int tmax)
{	
	int i;
	int j;
	int t;

	float placa[longitud_placa+1][longitud_placa+1];
	for(i=1;i<longitud_placa;i++)
	{
		for(j=1;j<longitud_placa;j++)
		{
			 placa[i][j]=50;
    		}
  	}
  	for(i=21;i<(21+11);i++)
	{
		for(j=41;j<(41+21);j++)
		{
			placa[i][j]=100;
    		}
  	}
	for(t=0;t<tmax;t++)
	{
		for(i=21;i<(21+11);i++)
		{
			for(j=41;j<(41+21);j++)
			{
				placa[i][j]=100;
      			}
    		}
    		for(i=1;i<longitud_placa-2;i++)
		{
			placa[i][0]=placa[i][1];
      placa[i][longitud_placa]=placa[i][longitud_placa-1];
      placa[0][i]=placa[1][i];
      placa[longitud_placa][i]=placa[longitud_placa-1][i];
      for(j=1;j<longitud_placa-2;j++){
	if(t==0){
	  printf("caso2_abiertas_t0	%d	%d	%d	%f\n",10,i,j, placa[i][j] );
	}
	else if(t==4){
	  printf("caso2_abierta_t100	%d	%d	%d	%f\n",11,i,j, placa[i][j] );
	}
	else if(t==100){
	  printf("caso2_abiertas_t2500	%d	%d	%d	%f\n",12,i,j, placa[i][j] );
	}
	placa[i][j]= a*(placa[i+1][j]+placa[i-1][j]) + a*(placa[i][j+1]+placa[i][j-1])+(1-4*a)*placa[i][j];
      }
    }
  }
}

void Caso2_periodicas(float a, int tmax)
{
  int i;
  int j;
  int t;

  float placa[longitud_placa+1][longitud_placa+1];
  for(i=1;i<longitud_placa;i++){
    for(j=1;j<longitud_placa;j++){
      placa[i][j]=50;
    }
  }
  for(i=21;i<(21+10);i++){
    for(j=41;j<(41+20);j++){
      placa[i][j]=100;
    }
  }
  for(t=0;t<tmax;t++){
    for(i=21;i<(21+11);i++){
      for(j=41;j<(41+21);j++){
	placa[i][j]=100;
      }
    }
    for(i=1;i<longitud_placa-2;i++){
      placa[i][0]=placa[i][longitud_placa-1];
      placa[i][longitud_placa]=placa[i][1];
      placa[0][i]=placa[longitud_placa-1][i];
      placa[longitud_placa][i]=placa[1][i];
      for(j=1;j<longitud_placa-2;j++){
	if(t==0){
	  printf("caso2_periodicas_t0	%d	%d	%d	%f\n",13,i,j, placa[i][j] );
	}
	else if(t==4){
	  printf("caso2_periodicas_t100	%d	%d	%d	%f\n",14,i,j,placa[i][j] );
	}
	else if(t==100){
	  printf("caso2_periodicas_t2500	%d	%d	%d	%f\n",15,i,j,placa[i][j] );
	}
	placa[i][j]=a*(placa[i+1][j]+placa[i-1][j]) + a*(placa[i][j+1]+placa[i][j-1])+(1-4*a)*placa[i][j] ;
      }
    }
  }
}


void Caso2_fijas(float a, int tmax)
{
  int i;
  int j;
  int t;

  float placa[longitud_placa+1][longitud_placa+1];
  for(i=1;i<longitud_placa;i++){
    for(j=1;j<longitud_placa;j++){
      placa[i][j]=50;
    }
  }
  for(i=21;i<(21+11);i++){
    for(j=41;j<(41+21);j++){
      placa[i][j]=100;
    }
  }
  for(t=0;t<tmax;t++){
    for(i=21;i<(21+11);i++){
      for(j=41;j<(41+21);j++){
	placa[i][j]=100;
      }
    }
    for(i=1;i<longitud_placa-2;i++){
      placa[i][0]=50;
      placa[i][longitud_placa]=50;
      placa[0][i]=50;
      placa[longitud_placa][i]=50;
      for(j=1;j<longitud_placa-2;j++){
	if(t==0){
	  printf(" 'caso2_fijas_t0'	%d	%d	%d	%f\n",16,i,j, placa[i][j] );
	}
	else if(t==40){
	  printf(" 'caso2_fijas_t100'	%d	%d	%d	%f\n",17,i,j,placa[i][j] );
	}
	else if(t==100){
	  printf("'caso2_fijas_t2500'	%d	%d	%d	%f\n",18,i,j,placa[i][j] );
	}
	placa[i][j]=a*(placa[i+1][j]+placa[i-1][j]) + a*(placa[i][j+1]+placa[i][j-1])+(1-4*a)*placa[i][j] ;
      }
    }
  }
}
