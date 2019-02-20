#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>
//#include <curses.h>
void CREDENCIALES(char *);
void SetColor(int);
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
          printf("Especifique el usuario para la configuracion: "); SetColor(10);scanf("%s",data_1.user);SetColor(15);

          printf("\tGasto principal (deposito inicial): "); scanf("%f",&data_1.monto_inicial);
          printf("\t ##Es '%.2f' el dato correcto ingresado? s/n ",data_1.monto_inicial); resp = getch();printf("\n");
            while(resp == 'n' || resp == 'N'){
              data_1.monto_inicial =0.00;system("cls");
              printf(" \t** Gasto principal (deposito inicial): "); scanf("%f",&data_1.monto_inicial);
              printf(" \t** Es %.2f el dato correcto ingresado? s/n ",data_1.monto_inicial);
              resp =  getch();
            } // endif
          printf("\tPago mensual de estadia: "); scanf("%f",&data_1.monto_mensual_cuarto);
          printf("\tPago quincenal de la estadia: "); scanf("%f",&data_1.monto_quincenal_cuarto);
          printf("\tPago quincenal por alimento: "); scanf("%f",&data_1.monto_comida);
          //printf("\n", );
          printf("\tSalario base generado por quincena: "); scanf("%f",&data_1.salario);

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

void SetColor(int ForgC){
   WORD wColor;
   HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_SCREEN_BUFFER_INFO csbi;

   if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
   {
   wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
   SetConsoleTextAttribute(hStdOut, wColor);
   }
   return;
}
