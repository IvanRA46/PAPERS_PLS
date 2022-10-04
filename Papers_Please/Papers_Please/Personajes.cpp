#include "Personajes.h"
#include <string>
#include <iostream>

using namespace std;

Personajes::Personajes(string Nombre, int Edad, char Sexo, string Nacionalidad) {
	this->Nombre = Nombre;
	this->Edad = Edad;
	this->Sexo = Sexo;
	this->Nacionalidad = Nacionalidad;
}

void Personajes::Mostrar() {
	if (i == 0) {
		cout << "\n        -PASAPORTE-\n";
		cout << "Nombre: Abigail " << "\n";
		cout << "Edad: 20 " << "\n";
		cout << "Sexo: M "  << "\n";
		cout << "Nacionalidad: Mexicana "  << "\n";
		system("pause");
		system("cls");
	}
	if (i == 1) {
		cout << "        -PASAPORTE-\n";
		cout << "Nombre: Leo " << "\n";
		cout << "Edad: 20 " << "\n";
		cout << "Sexo: H " << "\n";
		cout << "Nacionalidad: China " << "\n";
		system("pause");
		system("cls");
	}
	if (i == 2) {
		cout << "        -PASAPORTE-\n";
		cout << "Nombre: Jorge " << "\n";
		cout << "Edad: 20 " << "\n";
		cout << "Sexo: H " << "\n";
		cout << "Nacionalidad: Tailandesa " << "\n";
		system("pause");
		system("cls");
	}

}

void Personajes::Comparar(string Nombre, int Edad, char Sexo, string Nacionalidad) {
	string PNombre1 = "Abigail";
	int PEdad1 = 20;
	char PSexo1 = 'M';
	string PNacionalidad1 = "Mexicana";

	string PNombre2 = "Leo";
	int PEdad2 = 20;
	char PSexo2 = 'H';
	string PNacionalidad2 = "China";

	string PNombre3 = "Jorge";
	int PEdad3 = 18;
	char PSexo3 = 'H';
	string PNacionalidad3 = "Italiana";

	if (PNombre1 == Nombre && PEdad1 == Edad && PSexo1 == Sexo && PNacionalidad1 == Nacionalidad) {
		cout << "CORRECTO\n Pasamos al siguiente personaje: ";
		i++;
		this->i = i;
		system("pause");
	}
	else {
		if (PNombre2 == Nombre && PEdad2 == Edad && PSexo2 == Sexo && PNacionalidad2 == Nacionalidad) {
			cout << "CORRECTO\n Pasamos al siguiente personaje: ";
			i++;
			cout << i;
			this->i = i;
			system("pause");
		}
		else {
			if (PNombre3 == Nombre && PEdad3 == Edad && PSexo3 == Sexo && PNacionalidad3 == Nacionalidad) {
				cout << "Por el dia de hoy es todo...esperemos al dia siguiente. ";
				i++;
				cout << i;
				this->i = i;
				system("pause");
			}
			else {
				cout << "DATOS INCORRECTOS";
			}
			
			
		}
	}
	
}

