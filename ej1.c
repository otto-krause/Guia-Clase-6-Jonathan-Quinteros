#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
char calf;
printf("Ingrese su calificacion ");
calf=getchar();
switch (calf){
case 'A':
case 'a':
printf("Excelente");
break;
case 'B':
case 'b':
printf("Buena");
break;
case 'C':
case 'c':
printf("Regular");
break;
case 'D':
case 'd':
printf("Suficiente");
break;
case 'F':
case 'f':
printf("No suficiente");
break;
default:
printf("Error");
break;
}
return 0;
}

