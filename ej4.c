#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
int mes=0;
printf("Ingrese el dia (1-7)");
scanf("%d",&mes);
switch (mes){
case (1):
printf("Lunes");
break;
case (2):
printf("Martes");
break;
case (3):
printf("Miercoles");
break;
case (4):
printf("Jueves");
break;
case (5):
printf("Viernes");
break;
case (6):
printf("Sabado");
break;
case (7):
printf("Domingo");
break;
default:
printf("Error");
break;
}
return 0;
}
