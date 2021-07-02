#pragma once

#include <iostream>
#include <string>
#include <SDL.h>
#include <algorithm>

#include "GameObject.h"
#include "Texture.h"
#include "Tile.h"
#include "TileGraph.h"
#include "MoveDirection.h"
#include "Fantasma.h"


using namespace std;

class Enemigo : public Fantasma {
//private:
//
//	Texture* texture;
//	//Velocidad en eje X y Y
//	int velocidadX;
//	int velocidadY;
//
//	//Velocidad a la que mueve el fantasma en cualquier eje
//	int velocidadPatron;
//
//	
//
//	int posicionXDestino;
//	int posicionYDestino;
//
//	int incrementoPosicionX;
//	int incrementoPosicionY;
//
//	int tiempoVisible;
//	int tiempoNoVisible;
//
//	int contadorTiempoVisible;
//	int contadorTiempoNoVisible;
//
//	int tiempoPoder;
//	
//	Tile* tileActual;
//	Tile* tileSiguiente;
//
//	MoveDirection direccionActual;
//	MoveDirection direccionSiguiente;
//
//	bool tratarDeMover(MoveDirection _direccionNueva);
public:
	//Constructores y destructores
	Enemigo(Tile* _tile, Texture* _enemigoTexture, int _posicionX, int _posicionY, int _ancho, int _alto, int _anchoPantalla, int _altoPantalla, int _velocidadPatron);
	//~Enemigo);

	//Metodos accesores

	//int getVelocidadX() { return velocidadX; }
	//int getVelocidadY() { return velocidadY; }
	//int getVelocidadPatron() { return velocidadPatron; }
	//Tile* getTile() { return tileActual; }
	//Tile* getTileSiguiente() { return tileSiguiente; }

	//int getTiempoVisible() { return tiempoVisible; }
	//int getTiempoNoVisible() { return tiempoNoVisible; }

	//void setVelocidadX(int _velocidadX) { velocidadX = _velocidadX; }
	//void setVelocidadY(int _velocidadY) { velocidadY = _velocidadY; }
	//void setVelocidadPatron(int _velocidadPatron) { velocidadPatron = _velocidadPatron; }
	//void setTile(Tile* _tileNuevo);
	//void setTileSiguiente(Tile* _tileNuevoSiguiente) { tileSiguiente = _tileNuevoSiguiente; }
	//
	//void setTiempoVisble(int _tiempoVisible) { tiempoVisible = _tiempoVisible; }
	//void setTiempoNoVisble(int _tiempoNoVisible) { tiempoNoVisible = _tiempoNoVisible; }

	//void setTiempoPoder(int _tiempoPoder) { tiempoPoder = _tiempoPoder; }
	//// Metodos varios
	///*bool visiblePersonaje() override;
	//void poder() override;*/
	//// Actualizar datos fantasma
	////void update() override;
	 
};

