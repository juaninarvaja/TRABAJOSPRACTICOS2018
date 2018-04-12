#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>



/** \brief funcionSumar suma dos numeros
 * \param float x =  Primer numero que recibe
 * \param float y = Segundo numero que recibe
 * \return retorna el resultado de la suma entre los dos parametros recibidos
 *
 */

 float funcionSumar(float x, float y){

    float resultado;
    resultado = x + y;
    return resultado;
 }

 /** \brief funcionRestar resta dos numeros
 * \param float x =  Primer numero que recibe
 * \param float y = Segundo numero que recibe
 * \return retorna el resultado de la resta entre los dos parametros recibidos
 *
 */

float funcionRestar(float x, float y){

    float resultado;
    resultado= x - y ;
    return resultado;
}

/** \brief funcionDividir divide dos numeros
 * \param float x =  Primer numero que recibe
 * \param float y = Segundo numero que recibe
 * \return retorna el resultado de la division entre los dos parametros recibidos
 *
 */


float funcionDividir(float x, float y){
    float resultado;

    while(y == 0){
        printf("ERROR: NO SE PUEDE DIVIDIR POR 0 , REINGRESE NUMERO B \n");
        scanf("%f",&y);
            }
    resultado = x / y;

    return resultado;

    }

    /** \brief funcionMultiplicar multiplica dos numeros
 * \param float x =  Primer numero que recibe
 * \param float y = Segundo numero que recibe
 * \return retorna el resultado de la multiplicacion entre los dos parametros recibidos
 *
 */

float funcionMultiplicar(float x, float y){
    float resultado;

    resultado = x * y ;

    return resultado;
}

/** \brief funcionFactorial calcula el factorial de un numero
 * \param float x = Numero que recibe
 * \return retorna el factorial del numero recibido, si es que este es entero
 *
 */


int funcionFactorial(float x){
    int resultado =1 ;
    int  x_entero = (int) x;
    int aux;

     while(x_entero - x){
        printf("no se puede buscar el factorial de un decimal \n");
     }

        for(aux = 1; aux <= x_entero; aux++){
            resultado = resultado * aux;
     }
return resultado;

}






#endif // FUNCIONES_H_INCLUDED





