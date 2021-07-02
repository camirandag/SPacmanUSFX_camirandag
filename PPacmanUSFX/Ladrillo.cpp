#include "Ladrillo.h"

Ladrillo::Ladrillo(Tile* _tile, Texture* _ladrilloTextura, int _posicionX, int _posicionY, int _ancho, int _alto, int _anchoPantalla, int _altoPantalla) :
	GameObject(_ladrilloTextura, _posicionX, _posicionY, _ancho, _alto, _anchoPantalla, _altoPantalla) {

	tileActual = _tile;

	if (tileActual != nullptr) {
		tileActual->setLadrillo(this);

		posicionX = tileActual->getPosicionX() * Tile::anchoTile;
		posicionY = tileActual->getPosicionY() * Tile::altoTile;
	}
	else {
		posicionX = 0;
		posicionY = 0;
	}
};

void Ladrillo::setTile(Tile* _tileNuevo) {
	if (tileActual != nullptr)
		tileActual->setLadrillo(nullptr);

	tileActual = _tileNuevo;

	if (tileActual != nullptr) {
		tileActual->setLadrillo(this);

		posicionX = tileActual->getPosicionX() * Tile::anchoTile;
		posicionY = tileActual->getPosicionY() * Tile::altoTile;
	}
};

