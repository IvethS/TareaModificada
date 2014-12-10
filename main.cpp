#include "Evaluador.h"
#include <iostream>
#include <math.h>
using namespace std;

//Desrefencia ptr (dado) y devuelve su valor
//se hace desferencia para poder obtener el valor y asi mostrarlo.
int obtenerValor(int *ptr)
{
    return *ptr;
}

//Desreferencia a (dado) y b (dado) y devuelve la suma de ambos
//aqui lo que hace es que se desreferencia los valores y nos devolvuelve la suma de a +b
int sumar(int* a, int* b)
{
    return *a+*b;
}

//Devuelve true si a (dado) y b (dado) apuntan al mismo espacio de memoria
//aqui se hace un if para comparar las direcciones si es el mismo espacio de memoria
bool compararApuntadores(string *a, string *b)
{
    if(a==b)
{
    return true;
}
    else
    {
    return false;
    }

}

//Desrefencia a (dado) y b (dado), devuelve true si ambos valores son iguales de lo contrario devuelve false
//se hace un if que compara con el uso de la desferencia de las variables a y b y si es igual nos devolvera true.
bool comparar(string *a, string *b)
{
        if(*a==*b)

        return true;
        else
            return false;
}

//Desreferencia a (dado) y devuelve su primera letra
char getPrimeraLetra(string* a)
{

    string letra =*a;
                    //utilizamos la funcion get para obtener la primera letra de la variable
    return letra[0];
}

//Desreferencia a (dado) y devuelve true si es palindroma de lo contrario devuelve false
//Definicion de palindromo: http://es.wikipedia.org/wiki/Pal%C3%ADndromo
//Ejemplos de palindromos: Ana, arenera, arepera, anilina, ananá, Malayalam, Neuquén, Oruro, oso, radar, reconocer, rotor, salas, seres, somos, sometemos
bool esPalindromo(string* a)
{
    string palabra=*a ;
    if(palabra==string(palabra.rbegin(),palabra.rend()))
    {
    return true;
    }
    else{
            return false;
        }

        }


//Desreferencia base (dado) y exponente (dado) y devuelve la base elevado al exponente
int getExponente(int* base, int* exponente)
{
    //se definen 2 variables
    //luego el numero se debe igualar a la base hacemos un ciclo for para que recorra y hago lo del exponente
    //y al final devolvemos lo almacenado en la respuesta de la base con el exponente
      int respuesta = 0;
      int numero;
      numero = *base;
      for (int i =1; i<(*exponente); i++)
      {
          respuesta = (numero)*= (*base);
      }

    return respuesta;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
