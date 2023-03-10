#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// Definicion de funciones
int ValidarDato();
int HallarSuma(int numero);

//Codigo principal
int main()
{
    bool ciclo = false;
    int Valor = 0;
    int suma = 0;

    while(ciclo == false)
    {
        Valor = ValidarDato();

        if(Valor != 0)
        {
            suma = HallarSuma(Valor);

            printf("La suma de sus divisores propios es: %d",suma);
            printf("\n");

            if (suma < Valor)
            {
                printf("El numero %d es deficiente",Valor);
                printf("\n");
            }
            else if (suma == Valor)
            {
                printf("El numero %d es perfecto",Valor);
                printf("\n");
            }
            else
            {
                printf("El numero %d es abundante",Valor);
                printf("\n");
            }
        }
        else
        {
            printf("Eso es todo amigos");
            ciclo = true;
        }

        
    }    


}

int ValidarDato()
{
    int dato = 0;
    bool estado = false;

    while(estado == false)
    {
        
        printf("Ingrese numero: ");
        scanf(" %d",&dato);
        
        if ((dato > 0) && (dato < 580))
        {
                printf("Numero Valido!");
                printf("\n");
                estado = true;
        }
        else if (dato == 0)
        {
            return dato;
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