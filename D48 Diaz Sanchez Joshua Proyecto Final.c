//D48 Diaz Sanchez Joshua Proyecto Final

#include <stdio.h>
#include <stdlib.h>
#include "Actividad_1.h"
#include "Actividad_2.h"
#include "Actividad_3.h"
#include "Actividad_4.h"
#include "Actividad_5.h"
#include "Actividad_6.h"
#include "Actividad_8.h"
#include "Actividad_9.h"
#include "Actividad_10.h"
#include "Actividad_12.h"
#include "Actividad_13.h"

int main(){

int n=0,x=1;

do{
    system("cls");
    printf("-----Proyecto Final-----\n");
    printf(" 1 = Actividad 1 \n");
    printf(" 2 = Actividad 2 \n");
    printf(" 3 = Actividad 3 \n");
    printf(" 4 = Actividad 4 \n");
    printf(" 5 = Actividad 5 \n");
    printf(" 6 = Actividad 6 \n");
    printf(" 7 = Actividad 7 \n");
    printf(" 8 = Actividad 8 \n");
    printf(" 9 = Actividad 9 \n");
    printf(" 10 = Actividad 10 \n");
    printf(" 11 = Actividad 11 \n");
    printf(" 12 = Actividad 12 \n");
    printf(" 13 = Actividad 13 \n");
    printf("------------------------\n");
    printf("\nIngrese el numero de actividad: ");
    scanf("%i",&n);

    system("cls");

    switch(n){
    case 1:
        Act1();
        printf("\n");
    break;
    case 2:
        Act2();
        printf("\n");
    break;
    case 3:
        Act3();
        printf("\n");
    break;
    case 4:
        Act4();
        printf("\n");
    break;
    case 5:
        Act5();
        printf("\n");
    break;
    case 6:
        Act6();
        printf("\n");
    break;
    case 7:
        printf("-----No esta :(-----");
        printf("\n");
    break;
    case 8:
        Act8();
        printf("\n");
    break;
    case 9:
        Act9();
        printf("\n");
    break;
    case 10:
        Act10();
        printf("\n");
    break;
    case 11:
        printf("-----No esta :(-----");
        printf("\n");
    break;
    case 12:
        Act12();
        printf("\n");
    break;
    case 13:
        Act13();
        printf("\n");
    break;
    }

    printf("\n-----Si desea salir ingrese 0, \n---Si desea continuar ingrese 1: ");
    scanf("%i",&x);

}while(x!=0);

}
