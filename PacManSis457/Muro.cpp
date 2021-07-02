#include "Muro.h"


Muro::Muro(Tile* _tile, Texture* _muroTextura, int _posicionX, int _posicionY, int _ancho, int _alto, int _anchoPantalla, int _altoPantalla) :
	Pared(_tile, _muroTextura, _posicionX, _posicionY, _ancho, _alto, _anchoPantalla, _altoPantalla) {

	//tileActual = _tile;
	////validaciones, si tile actual no es nullptr => asiganos ese tile  
	//if (tileActual != nullptr) {

	//	tileActual->setMuro(this);
	//	//* por tile ancho para que tenga el tamaño del tile
	//	posicionX = tileActual->getPosicionX() * Tile::anchoTile;
	//	posicionY = tileActual->getPosicionY() * Tile::altoTile;
	//}
	//else {
	//	posicionX = 0;
	//	posicionY = 0;
	//}
};

////void Muro::setTile(Tile* _tileNuevo) {
//	//verifica si esta vacio el tile actual 
//	if (tileActual != nullptr)
//		tileActual->setMuro(nullptr);
//
//	//asigna el tile nuevo
//	tileActual = _tileNuevo;
//
//	//verifica si el tile asigno no este vacia
//	if (tileActual != nullptr) {
//		tileActual->setMuro(this);
//
//		posicionX = tileActual->getPosicionX() * Tile::anchoTile;
//		posicionY = tileActual->getPosicionY() * Tile::altoTile;
//	}
//};

