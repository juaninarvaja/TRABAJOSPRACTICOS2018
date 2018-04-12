#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"



    float funcionSumar(float ,float);
    float funcionRestar(float,float);
    float funcionDividir(float,float);
    float funcionMultiplicar(float,float);
    int funcionFactorial(float);


int main(){

char seguir='s';
int opcion=0;
float x = 0,y = 0;
float suma, resta, division, multiplicacion;
int factorial;


    while(seguir=='s')
    {
        printf("\n \n 1- Ingresar 1er operando (A= %.2f)\n", x);
        printf("2- Ingresar 2do operando (B= %.2f) \n", y);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("ingrese el numero A: ");
                fflush(stdin);
                scanf("%f",&x);
                break;
           case 2:
                printf("ingrese el numero B: ");
                scanf("%f", &y);
                break;
            case 3: suma = funcionSumar( x,y);
                   printf("El resultado de la suma es: %.2f \n", suma);
                break;
            case 4: resta = funcionRestar(x,y);
                  printf("El resultado de la resta es %.2f \n", resta);
                break;
            case 5: division = funcionDividir(x,y);
                    printf("El resultado de la division es %.2f \n", division);
                break;
            case 6: multiplicacion = funcionMultiplicar(x,y);
                    printf("El resultado de la mltiplicacion es %.2f \n", multiplicacion);
                break;
            case 7: factorial = funcionFactorial(x);
                    printf("El resultado del factorial  es %i \n", factorial);
                break;
            case 8:
                suma = funcionSumar(x, y);
                resta = funcionRestar(x, y);
                division = funcionDividir( x, y);
                multiplicacion =  funcionMultiplicar( x, y);
                factorial = funcionFactorial(x);
                printf("El resultado de la suma es %.2f \n", suma);
                printf("El resultado de la resta es %.2f \n", resta);
                printf("El resultado de la division es %.2f \n", division);
                printf("El resultado de la multiplicacion es %.2f \n", multiplicacion);
                printf("El resultado del factorial es %i \n", factorial);
                               break;

            case 9:
                seguir = 'n';
                break;
                 }
        }
return 0;
}
