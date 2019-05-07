#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define KGRN  "\x1B[32m"
#define KNRM  "\x1B[0m"
#define KYEL  "\x1B[33m"
#define KRED  "\x1B[31m"

int cal_b(int *, int *, int, int, int);
int main(int argc, char const *argv[])
{
	int n=0;
	system("clear");
	printf("%s\nMODELO REGRESION LINEAL%s\n\n\n",KYEL,KNRM);

	printf("Cual es la cantidad de datos a leer: ");printf(KGRN);scanf("%d",&n);printf(KNRM);
	int x[n], y[n],result, id=0, sumx=0, sumy=0; float x1=0,y1=0,a,b;
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
			printf("X[%d] = ",i+1);printf(KGRN);scanf("%d",&x[i]);printf(KNRM);	
				sumx += x[i];
				//x1 += (x[i]/n);	
			printf("Y[%d] = ",i+1);printf(KGRN);scanf("%d",&y[i]);printf(KNRM);	
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
		printf("EL VALOR DE B = %s %f %s \n\n",KRED,b,KNRM);

	return 0;
}
int cal_b(int *x, int *y, int x1, int y1, int n){
	int s1=0,s2=0;
	for (int i = 0; i < n; i++)
	{
		s1 += (x[i] - x1)*(y[i]-y1);
		s2 += (x[i]-x1)*(x[i]-x1);
	}
	return s1/s2;
}