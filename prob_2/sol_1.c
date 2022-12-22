#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// Definicion de funciones
int ValidarDato();

//Codigo principal
int main()
{
    int Valor;
    Valor = ValidarDato();
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