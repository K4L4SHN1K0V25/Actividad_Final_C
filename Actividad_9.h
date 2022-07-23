#ifndef ACTIVIDAD_9_H_INCLUDED
#define ACTIVIDAD_9_H_INCLUDED

int Act9(){

int n, m = 0, o;

do{
    printf("\nIngrese un numero para sumar: ");
    scanf("%i",&n);

    m = n + m;

    if (m<5000){
        printf("\nSi desea continuar ingrese 1, si desea salir ingrese 0: ");
        scanf("%i",&o);
    }
}while(m < 5000 && o == 1);

printf("\nLa suma de los numeros ingresados da un resultado de: %i",m);

}


#endif // ACTIVIDAD_9_H_INCLUDED
