#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
int mes=0,ano=0;
float aa=0;
printf("Ingrese el mes (1-12) ");
scanf("%d",&mes);
printf("Ingrese el anio ");
scanf("%d",&ano);
switch (mes){
case (1):
printf("Enero= 31 dias");
break;
case (2):
aa=ano%4;
if(aa==0){
printf("\n Febrero= 29 dias");
} else{
printf("\n Febrero=28 dias");
}
break;
case (3):
printf("Marzo= 31 dias");
break;
case (4):
printf("Abril= 30 dias");
break;
case (5):
printf("Mayo= 31 dias");
break;
case (6):
printf("Junio= 30 dias");
break;
case (7):
printf("julio= 31 dias");
break;
case (8):
printf("Agosto= 31 dias");
break;
case (9):
printf("Septiembre= 30 dias");
break;
case (10):
printf("Octubre= 31 dias");
break;
case (11):
printf("Noviembre= 30 dias");
break;
case (12):
printf("Diciembre= 31 dias");
break;
default:
printf("Error");
break;
}
return 0;
}
