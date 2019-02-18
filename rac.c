#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
struct data
{
    float deuda[10];
    float monto_inicial;
};

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

void main(int argc, char const *argv[])
{
    char N_USER[10];
    printf("Login: ");
    scanf("%s",N_USER);

    if (strcmp(N_USER, "admin") == 0)
    {
        system("clear");
        printf("Bienvenido %sistrador al sistema de gestion de deudas personal.\n",N_USER);
        printf("Copyright © 2019, boodahDEV/Nahar is licensed under the Apache License 2.0\n\n");


/*     printf("%sred\n", KRED);
    printf("%sgreen\n", KGRN);
    printf("%syellow\n", KYEL);
    printf("%sblue\n", KBLU);
    printf("%smagenta\n", KMAG);
    printf("%scyan\n", KCYN);
    printf("%swhite\n", KWHT);
    printf("%snormal\n", KNRM); */

        for(int i = 0; i < 30; i++)
        {
            fflush(stdout);
            printf("+");
            usleep(20000);
        }
        printf("\n\n---> completado.");

    }
    else
    {
       

    }

}// END MAIN
