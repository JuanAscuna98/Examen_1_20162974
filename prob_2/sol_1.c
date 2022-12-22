#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// Definicion de funciones
int ValidarDato();
int HallarSuma(int numero);

//Codigo principal
int main()
{
    int Valor = 0;
    int suma = 0;
    Valor = ValidarDato();
    suma = HallarSuma(Valor);

    printf("La suma es: %d",suma);
}

int ValidarDato()
{
    int dato = 0;
    bool estado = false;

    while(estado == false)
    {
        
        printf("Ingrese numero: ");
        scanf(" %d",&dato);
        
        if ((dato > 0) & (dato < 580))
        {
                printf("Numero Valido!");
                printf("\n");
                estado = true;
        }
        else
        {
            printf("Numero erroneo, vuelva a ingresar numero");
            printf("\n");
        }
    } 

    return dato;

}

int HallarSuma(int numero)
{
    int suma = 0;
    int i; 

    for(i = 1 ; i < numero ; i++ )
    {
        if (numero % i == 0)
        {
            suma += i;
        }
    }

    return suma;
}