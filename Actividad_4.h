#ifndef ACTIVIDAD_4_H_INCLUDED
#define ACTIVIDAD_4_H_INCLUDED

int Act4(){

int a, b, r, s;

printf("Programa para obtener la division de 2 numeros enteros\n");
printf("Ingrese el primer numero: ");
scanf("%i",&a);
printf("Ingrese el segundo numero: ");
scanf("%i",&b);

r = a / b;
s = a % b;
printf("El resultado es: %i \n",r);
printf("El residuo es: %i",s);

}


#endif // ACTIVIDAD_4_H_INCLUDED
