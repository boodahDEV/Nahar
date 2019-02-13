#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void CREDENCIALES(char *);

struct data_1 {
  float deudas[10]; //
  float monto_inicial;
  float monto_mensual_cuarto;
  float monto_quincenal_cuarto;
  float monto_comida;
  float salario;
  float pagos_obligados[5]; // siendo [0]=agua, [1]=luz, [2]=internet
}*d;

int main(int argc, char const *argv[]) {

char u_name[10];
system("cls"); // EN VERSIONES UNIX TRABAJAR COMO UNA FUNCION
printf("Usuario:"); scanf("%s",u_name);

switch (strcmp(u_name,"farauz")) {
  case 0: {
    CREDENCIALES(u_name);

    /* code */
    break;
  }
  default:
      switch (strcmp(u_name, "admin")) {
        case 0: {
          //CREDENCIALES(u_name);
          system("cls"); // EN VERSIONES UNIX TRABAJAR COMO UNA FUNCION
          printf("Este modo tiene los roles necesarios para la carga inicial de los datos principales \nAprobado por: @boodah, %chttps://github.com/boodahDEV. Solicita tu extraccion o fork.\n\n\n\n\n",184);


          /* code */
          break;
        }
        default:
          switch (strcmp(u_name, "bjimenez")) {
            case 0: {
              CREDENCIALES(u_name);

              /* code */
            }
          }//fin switch
      }//FIN SWITCH
}//FIN switch

return 0;
}//FIN DEL MAIN

void CREDENCIALES(char *u_name){
  /*##*/system("cls"); // EN VERSIONES UNIX TRABAJAR COMO UNA FUNCION
  /*##*/printf("\t\tBienvenido al SG personal \n%c2019 boodahDEV Todos los derechos bajo la licencia Apache 2.0\n",184);
  /*##*/printf("\t\t      @User:%s\n\n\n", u_name);
}
