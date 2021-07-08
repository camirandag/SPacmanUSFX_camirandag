#include "Modificar.h"
#include <iostream>
#include <string>
#include <fstream>
Modificar::Modificar() {
	int cont = 1;
	if (cont <= 5) {
		//guardar en la matris
		ifstream archivo;
		archivo.open("Resources\\mapa.txt", ios::in);
		char matrix[15][20];
		string texto;
		for (int i = 0; i < 15; i++) {
			getline(archivo, texto);
			for (int j = 0; j < 20; j++) {
				matrix[i][j] = texto[j];
			}
		}
		remove("Resources\\mapa.txt");
		//modificar la matrix
		int y, z;
		srand(time(nullptr));
		y = (rand() % 15) + 1;
		z = (rand() % 20) + 1;
		matrix[y][z] = ' ';
		cout << "eliminado en: " << y << " " << z;
		y = (rand() % 15) + 1;
		z = (rand() % 20) + 1;
		matrix[y][z] = 'x';
		cout << "insertado en: " << y << " " << z;
		//añadir al docuemdo
		ofstream Doc;
		Doc.open("Resources\\mapa.txt", ios::app);
		for (int i = 0; i < 15; i++) {
			for (int j = 0; j < 20; j++) {
				Doc << matrix[i][j];
			}
			Doc << endl;
		}
		Doc.close();
	}
	cont++;
}