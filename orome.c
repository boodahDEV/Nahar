#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <curses.h>
void CREDENCIALES(char *);

struct data_1 {
  char user[10];
  float deudas[10]; //
  float monto_inicial;
  float monto_mensual_cuarto;
  float monto_quincenal_cuarto;
  float monto_comida;
  float salario;
  float pagos_obligados[5]; // siendo [0]=agua, [1]=luz, [2]=internet
}data_1;

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
          char resp;
          //CREDENCIALES(u_name)
          system("cls"); // EN VERSIONES UNIX TRABAJAR COMO UNA FUNCION
          printf("Gasto principal (deposito inicial): "); scanf("%f",&data_1.monto_inicial);
          printf("\nEs %.2f el dato correcto ingresado? s/n ",data_1.monto_inicial); resp = getch();


          while(resp == 'n' || resp == 'N'){
            data_1.monto_inicial =0.00;system("cls");
            printf(" ** Gasto principal (deposito inicial): "); scanf("%f",&data_1.monto_inicial);
            printf("\n ** Es %.2f el dato correcto ingresado? s/n ",data_1.monto_inicial);
            resp =  getch();
          } // endif

          printf("\nEspesifique el usuario para la configuracion: "); scanf("%s",data_1.user);
          printf("\nPago mensual del cuarto: "); scanf("%f",&data_1.monto_mensual_cuarto);
          printf("\nPago quincenal del cuarto: "); scanf("%f",&data_1.monto_quincenal_cuarto);
          printf("\nPago quincenal en pago de comida: "); scanf("%f",&data_1.monto_comida);
          //printf("\n", );
          printf("\nSalario base generado por quincena: "); scanf("%f",&data_1.salario);

          /* code */
          break;
        }// end switch admin
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
