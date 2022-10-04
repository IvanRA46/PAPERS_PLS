// Papers_Please.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Personajes.h"

using namespace std;

int main()
{
    string Nombre, Nacionalidad;
    int Edad = 0;
    char Sexo = ' ';
  
    cout << "Bienvenido\nEstas listo para comenzar a Jugar?\n";
    system("pause");
    system("cls");
    cout << "A continuacion se te presentaran algunos de tus datos como pasajero intenta\n memorizarlos para que puedas viajar a tu destino.\n";
    Personajes* p;
    p = new Personajes(Nombre, Edad, Sexo, Nacionalidad);
    p->Mostrar();
    cout << "Nombre: ";
    cin >> Nombre;
    cout << "Edad: ";
    cin >> Edad;
    cout << "Sexo(H/M): ";
    cin >> Sexo;
    cout << "Nacionalidad: ";
    cin >> Nacionalidad;
    p->Comparar(Nombre, Edad, Sexo, Nacionalidad);
    system("cls");
    p->Mostrar();
    cout << "Nombre: ";
    cin >> Nombre;
    cout << "Edad: ";
    cin >> Edad;
    cout << "Sexo(H/M): ";
    cin >> Sexo;
    cout << "Nacionalidad: ";
    cin >> Nacionalidad;
    p->Comparar(Nombre, Edad, Sexo, Nacionalidad);
    system("cls");
    p->Mostrar();
    cout << "Nombre: ";
    cin >> Nombre;
    cout << "Edad: ";
    cin >> Edad;
    cout << "Sexo(H/M): ";
    cin >> Sexo;
    cout << "Nacionalidad: ";
    cin >> Nacionalidad;
    p->Comparar(Nombre, Edad, Sexo, Nacionalidad);
    delete p;

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
