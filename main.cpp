#include <iostream>
#include "cabecera.h"

using namespace std;

int main()
{//int main()
int opcion=1;

while(opcion !=0)
{
        cout<<"***** Ejercicios de la practica 2 *****\n"<<endl;
        cout<<"seleccione una opcion \n"<<endl;
        cout<<"1)  Problema 1 : Billetes y monedas."<<endl;
        cout<<"2)  Problema 2 : Letras mayusculas aleatorias."<<endl;
        cout<<"3)  Problema 3 : Comparacion de dos cadenas de caracteres."<<endl;
        cout<<"4)  Problema 4 : Conviertir cadena de caracteres a un numero entero. "<<endl;
        cout<<"5)  Problema 5 : Convertir numero a cadena de caracteres."<<endl;
        cout<<"6)  Problema 6 : Cambio letras minusculas por mayusculas. "<<endl;
        cout<<"7)  Problema 7 : ."<<endl;
        cout<<"8)  Problema 8 : Separar numeros y caracteres."<<endl;
        cout<<"9)  Problema 9 : Cadena dividida en n # y sumada."<<endl;
        cout<<"10) problema 10: ."<<endl;
        cout<<"11) Problema 11: ."<<endl;
        cout<<"12) Problema 12: Verificar si matriz es un cuadrado magico."<<endl;
        cout<<"13) Problema 13: Numero de estrellas encontradas en la imagen."<<endl;
        cout<<"13) Problema 14: ."<<endl;
        cout<<"15) Problema 15: Interseccion entre un par de rectangulos. "<<endl;
        cout<<"16) Problema 16: ."<<endl;
        cout<<"17) Problema 17: Suma de todos los num amigables menores al num ingresado. "<<endl;
        cout<<"18) Problema 18: ."<<endl;
        cout<<" "<<endl;
        cout<<"Presione 0 para salir"<<endl;

        cin>>opcion;

switch(opcion)
{//switch
    case 1:
        cout << "***** Billetes y monedas *****\n"<<"Problema 1"<<endl;
        problema1 ();
        break;
    case 2:
         cout << "***** Letras mayusculas aleatorias *****\n"<<"Problema 2"<<endl;
         problema2 ();
         break;
    case 3:
         cout << "*****  *****\n"<<"Problema 3"<<endl;
         bool prueba;
         prueba = problema3();
         if (prueba == true)
             cout << "Las cadenas de cararteres son iguales. "<<endl;

         break;
    case 4:
        cout << "***** Conviertir cadena de caracteres a un numero entero *****\n"<<"Problema 4"<<endl;
        char cadena[101];
        int numero;
        cout << "Ingrese cadena de numeros: "<<endl;
        scanf("%s",cadena);
        numero = problema4 (cadena);
        cout << "Numero int: " << numero<<endl;
        break;
    case 5:
         cout << "***** Convertir numero a cadena de caracteres *****\n"<<"Problema 5"<<endl;
         problema5 ();
        break;
    case 6:
         cout << "***** Cambio letras minusculas por mayusculas *****\n"<<"Problema 6"<<endl;
         problema6 ();
         break;
    case 7:
         cout << "*****  *****\n"<<"Problema 7"<<endl;
         break;
    case 8:
         cout << "***** Separar numeros y caracteres *****\n"<<"Problema 8"<<endl;
         problema8 ();
         break;
    case 9:
         cout << "***** Cadena dividida en n # y sumada *****\n"<<"Problema 9"<<endl;
         problema9 ();
         break;
    case 10:
         cout << "*****  *****\n"<<"Problema 10"<<endl;
         problema10();
         break;
    case 11:
         cout << "*****  *****\n"<<"Problema 11"<<endl;
         break;
    case 12:
         cout << "***** Verificar si matriz es un cuadrado magico *****\n"<<"Problema 12"<<endl;
         problema12 ();
         break;
    case 13:
         cout << "***** Numero de estrellas encontradas en la imagen *****\n"<<"Problema 13"<<endl;
         problema13 ();
         break;
    case 14:
         cout << "*****  *****\n"<<"Problema 14"<<endl;
         break;
    case 15:
         cout << "***** Interseccion entre un par de rectangulos *****\n"<<"Problema 15"<<endl;
         problema15 ();
         break;
    case 16:
         cout << "***** Cantidad de caminos en una maya n*n *****\n"<<"Problema 16"<<endl;
         problema16 ();
         break;
    case 17:
         cout << "***** Suma de todos los num amigables menores al num ingresado *****\n"<<"Problema 17"<<endl;
         problema17 ();
         break;
    case 18:
         cout << "*****  *****\n"<<"Problema 18"<<endl;
         break;

    default:
         cout<<"La opcion no es valida. "<<endl;
         break;
}//switch
}//while(opcion !=0)

    return 0;
}

