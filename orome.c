#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char const *argv[]) {
  /* code */
char u_name[10];
system("cls"); // EN VERSIONES UNIX TRABAJAR COMO UNA FUNCION
printf("Usuario:"); scanf("%s",u_name);

switch (strcmp(u_name,"farauz")) {
  case 0: {
    printf("\t\tBienvenido al SG personal \n%c2019 boodahDEV Todos los derechos bajo la licencia Apache 2.0\n\n",184);

    /* code */
    return 0;
    break;
  }
  default:
      printf("Error !\n");
      return 1;
}//FIN switch

return 0;
}//FIN DEL MAIN
