#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define KGRN  "\x1B[32m"
#define KNRM  "\x1B[0m"
#define KYEL  "\x1B[33m"
#define KRED  "\x1B[31m"

struct data{
    char *nom_act;
    char *desc_act;
    char f_inicio[10];
    char f_final[10];
    char prioridad[5];
    int id_carga;
}d;

char *carga_memo_char(char *, int);
char *verifica(char *);
void carga_data();

int main(int argc, char const *argv[])
{
    char pass[4];int des=0;char *temp=carga_memo_char(temp,200);
    system("clear");
    printf("Pass: ");printf(KGRN);scanf("%[^\n]",pass);printf(KNRM);
        
    if(strcmp(pass,"1q2w")==0){
        system("clear");
        puts("Iniciando una nueva carga de actividades:");
        for(int i = 0; i < 41; i++)
        {
            fflush(stdout);
            printf(KGRN);printf("+");printf(KNRM);
            usleep(20000);
        }
        printf("\n\n\n");
        system("make clean");

        //aqui debe ir metodos de apertura de archivo.

        d.nom_act=carga_memo_char(d.nom_act,60);
        //VALIDAR QUE NINGUN CAMPO SEA NULL o SIN VALOR 
    printf("\n%sEl nombre de la actividad debe tener como maximo un total de 60 caracteres. %sEsto como obligatorio.%s\n",KYEL,KRED,KNRM);
        printf("Nombre de la actividad: ");printf(KGRN);scanf("%s",d.nom_act);printf(KNRM);
        fflush( stdin );
        printf("Desea agregar una descripcion? 0/1 =  ");printf(KGRN);scanf("%d",&des);printf(KNRM);
        fflush(stdin);
            if(des==0){
                d.desc_act=carga_memo_char(d.desc_act,200);
                printf("Descripcion de la actividad: ");
                scanf(" %[^\n]",temp);
                fflush(stdin);
                strcpy(d.desc_act, temp);
                free(temp);temp=NULL;
            }//edn if
       //dar mas control a las fechas, validar si inicia justo el dia de la carga
    printf(KYEL);printf("\n*EL FORMATO DE FECHA ES: AAAA/MM/DD * Esto como obligatorio.\n");printf(KNRM);
        printf("Fecha de inicio de la actividad: ");printf(KGRN);scanf("%s",d.f_inicio);printf(KNRM);
        fflush( stdin );
        printf("Fecha de finalizacion de la actividad: ");printf(KGRN);scanf("%s",d.f_final);printf(KNRM);
        fflush( stdin );
        //y la finalizacion se puede disparar en otro hilo de ejecucion que espere la finalizacion de la actividad, como especie de contador.
    printf(KYEL);printf("\n*LA PRIORIDAD SE ESTABLECE POR A(alta), B(media), C(baja), EN MAYUSCULAS. Esto como obligatorio.\n");printf(KNRM);
        printf("Prioridad de la actividad: "); printf(KGRN);scanf("%s",d.prioridad);printf(KNRM);
        fflush( stdin );

    //AQUI DEBO DE CARGAR TODO Y GUARDAR ARCHIVO
    }else{
        if(strcmp(pass,"exit")==0 || strcmp(pass,"EXIT")==0){
           printf(KYEL);printf("\n\n\nPrograma finalizado...\n");printf(KNRM);
		   getchar(); 
           exit(EXIT_SUCCESS);
        }
            
    }




		printf("\n\n\nPrograma finalizado...\n");
		getchar();	
    return EXIT_SUCCESS;
}
char *carga_memo_char(char *a, int b){
    a =(char *)malloc(b*sizeof(char)); 
    return a;
}
char * verifica(char *a){

}