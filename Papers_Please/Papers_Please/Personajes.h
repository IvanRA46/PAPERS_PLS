#include <string>

using namespace std;

class Personajes
{
private:
	string Nombre;
	int Edad;
	char Sexo;
	string Nacionalidad;
	int i=0;
public:
	Personajes(string, int, char, string);
	void Comparar(string, int, char, string);
	void Mostrar();
};

