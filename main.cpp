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
        cout<<"7)  Problema 7 : Elimina los caracteres repetidos de cadena de caracteres."<<endl;
        cout<<"8)  Problema 8 : Separar numeros y caracteres."<<endl;
        cout<<"9)  Problema 9 : Cadena dividida en n # y sumada."<<endl;
        cout<<"10) problema 10: Convertir un número en el sistema romano al sistema arábigo."<<endl;
        cout<<"11) Problema 11: Permita manejar las reservas de asientos en una sala de cine."<<endl;
        cout<<"12) Problema 12: Verificar si matriz es un cuadrado magico."<<endl;
        cout<<"13) Problema 13: Numero de estrellas encontradas en la imagen."<<endl;
        cout<<"13) Problema 14: Llene una matriz n*n con los números del 1 al n y la imprima, luego imprime la matriz rotada 90, 180 y 270 grados."<<endl;
        cout<<"15) Problema 15: Interseccion entre un par de rectangulos. "<<endl;
        cout<<"16) Problema 16: Calcula el número de caminos posibles en una cuadrícula de nxn."<<endl;
        cout<<"17) Problema 17: Suma de todos los num amigables menores al num ingresado. "<<endl;
        cout<<"18) Problema 18: Halla la enésima permutación lexicográfica de los números entre 0 y 9."<<endl;
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
         cout << "***** Comparacion de dos cadenas de caracteres *****\n"<<"Problema 3"<<endl;
         char c1 [100], c2 [100];
         cout << "Ingrese cadena 1:"<<endl;
         scanf("%s",c1);
         cout << "Ingrese cadena 2:"<<endl;
         scanf("%s",c2);

         bool prueba;
         prueba = problema3(&c1[0], c2);

         if (prueba == 1)
             cout << "Las cadenas son iguales. "<< endl<<endl;
         else
             cout << "las cadenas son diferentes. "<<endl<<endl;

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
         cout << "El numero en forma de  cadena de caracteres es: "<< problema5 ()<<endl;
        break;
    case 6:
         cout << "***** Cambio letras minusculas por mayusculas *****\n"<<"Problema 6"<<endl;
         problema6 ();
         break;
    case 7:
         cout << "***** Elimina los caracteres repetidos de cadena de caracteres *****\n"<<"Problema 7"<<endl;
         char t[100], final[100];

         cout << "Ingrese cadena;"<<endl;
         scanf("%s",t);

         problema7(&t[0],&final[0]);
         cout << final << endl;
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
         cout << "***** Convertir un número en el sistema romano al sistema arábigo *****\n"<<"Problema 10"<<endl;
         problema10();
         break;
    case 11:
         cout << "***** Permita manejar las reservas de asientos en una sala de cine *****\n"<<"Problema 11"<<endl;
         problema11 ();
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
         cout << "***** Llene una matriz n*n con los números del 1 al n y la imprima, luego imprime la matriz rotada 90, 180 y 270 grados *****\n"<<"Problema 14"<<endl;
         int ***conj_matrices;
             unsigned short dim;
             cout<<"Ingrese la dimension de la matriz: ";
             cin >> dim;

             conj_matrices = generar_conj_matrices(dim);
             imprimir_conj_matrices(conj_matrices,dim);
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
         cout << "*****  Halla la enésima permutación lexicográfica de los números entre 0 y 9  *****\n"<<"Problema 18"<<endl;
         problema18 ();
         break;

    default:
         cout<<"La opcion no es valida. "<<endl;
         break;
}
}//while(opcion !=0)

    return 0;
}

