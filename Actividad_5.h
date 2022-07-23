#ifndef ACTIVIDAD_5_H_INCLUDED
#define ACTIVIDAD_5_H_INCLUDED

int Act5(){

int EntIng1, EntIng2, MayAlm=0;

printf("Ingrese el primer valor entero: ");
scanf("%i",&EntIng1);
printf("Ingrese el segundo valor entero: ");
scanf("%i",&EntIng2);

MayAlm = EntIng2;

if (EntIng1>MayAlm){
    MayAlm = EntIng1;

}
printf("%i",MayAlm); //<-- para comprobar que se guarda el valor mas alto
}

#endif // ACTIVIDAD_5_H_INCLUDED
