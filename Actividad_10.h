#ifndef ACTIVIDAD_10_H_INCLUDED
#define ACTIVIDAD_10_H_INCLUDED

int Act10(){

int n,suma = 0,i;

printf("Ingrese un numero: ");
scanf("%i",&n);

for(i=1;i<=n;i++){
    suma = suma + i;
}
printf("\nLa suma total es %i\n",suma);

}

#endif // ACTIVIDAD_10_H_INCLUDED
