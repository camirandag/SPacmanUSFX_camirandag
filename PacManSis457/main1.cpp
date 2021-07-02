#include <iostream>
#include <time.h>
#include <Windows.h>
#include <map>

using namespace std;

class Dados {
private:
	int numLanzamientos;
	int puntaje;
	string identificador;
public:
	int getNumLanzamientos() { return numLanzamientos; }
	void setNumLanzamientos(int _numLazamientos) { numLanzamientos = _numLazamientos; }

	int getPuntaje() { return puntaje; }
	void setPuntaje(int _puntaje) { puntaje = _puntaje; }

	string getNombre() { return identificador; }
	void setPuntaje(string _identificador) { identificador = _identificador; }
	void pedirDatos();
	void lanzarDados();

};
void Dados::pedirDatos() {
	cout << "------ Datos ------\n" << endl;
	cout << "____________________________" << endl;
	cout << "Nombre: "; cin >> identificador;
	
}
multimap<int, string> lista;
void Dados::lanzarDados() {
	
	srand(time(nullptr));
	int tiro = 0;
	do {
		tiro = rand() % 7;
		cout << "Tiro: " << tiro << endl;
		Sleep(200);
		system("cls");
		if (GetKeyState(VK_SPACE)) {
			cout << "Entra" << endl;
			puntaje = tiro;
			lista.insert(pair<int, string>({ puntaje, "Juan" }));
			numLanzamientos--;			
		}
				
	} while (numLanzamientos != 0);

}

int main() {
	int tiros = 3;
	int puntos = 0;
	string nombre = "Pedro";
	
	
	Dados dados;// = new Dados();
	dados.setNumLanzamientos(tiros);
	dados.lanzarDados();
	for (auto par : lista) {
		cout << par.first << " = " << par.second << endl;
	}
	return 0;
}