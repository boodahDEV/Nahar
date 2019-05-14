#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

#define KGRN  "\x1B[32m"
#define KNRM  "\x1B[0m"
#define KYEL  "\x1B[33m"
#define KRED  "\x1B[31m"
#define KMAG  "\x1B[35m"

float cal_b(float *, float *, float, float, float);
float cal_r(float *, float *, float, float, float);

int main(int argc, char const *argv[])
{
	int n=0;
	system("clear");
	printf("%s\nMODELO REGRESION LINEAL%s\n\n\n",KYEL,KNRM);

	printf("Cual es la cantidad de datos a leer: ");printf(KGRN);scanf("%d",&n);printf(KNRM);
	float result, id=0, sumx=0, sumy=0; float x[n], y[n],x1=0,y1=0,a=0,b=0,R=0;
	printf("Iniciando carga de datos\n");
	////////////////////////////////////////////////////
	    for(int x = 0; x < 41; x++)
        {
            fflush(stdout);
            printf(KGRN);printf("+");printf(KNRM);
            usleep(20000);
        }
        printf("\n\n\n");
    ///////////////////////////////////////////////////
		for (int i = 0; i < n; i++)
		{
			printf("X[%d] = ",i+1);printf(KGRN);scanf("%f",&x[i]);printf(KNRM);	
				sumx += x[i];
				//x1 += (x[i]/n);	
			printf("Y[%d] = ",i+1);printf(KGRN);scanf("%f",&y[i]);printf(KNRM);	
				sumy += y[i];
				//y1 += (y[i]/n);	
			id++;	
			printf("\n");
		}
		x1= (float)(sumx/n);
		y1= (float)(sumy/n);
		printf("EL VALOR DE X^ = %s %f %s \n",KRED,x1,KNRM);
		printf("EL VALOR DE Y^ = %s %f %s \n\n",KRED,y1,KNRM);
		b = cal_b(x,y,x1,y1,n);
		a = (y1 - (b * x1));
		printf("EL VALOR DE B = %s %f %s \n",KRED,b,KNRM);
		printf("EL VALOR DE A = %s %f %s \n\n",KRED,a,KNRM);
		R = cal_r(x,y,x1,y1,n);
		printf("\n\nEL VALOR DE R = %s %f %s \n\n",KMAG,R,KNRM);


	return 0;
}
float cal_b(float *x, float *y, float x1, float y1, float n){
	float s1=0,s2=0;
	for (int i = 0; i < n; i++)
	{
		s1 += (x[i] - x1)*(y[i]-y1);
		s2 += pow((x[i]-x1),2.0);
		//s2 += (x[i]-x1)*(x[i]-x1);
	}
	return s1/s2;
}//end

float cal_r(float *x, float *y, float x1, float y1, float n){
	float r=0,s3=0,s4=0,s5=0;
	for (int i = 0; i < n; i++)
	{
		s3 += (x[i] - x1)*(y[i]-y1);
		s4 += pow((x[i]-x1),2.0);
		s5 += pow((y[i]-y1),2.0);
	}
	return s3/sqrt(s4*s5);
}//end