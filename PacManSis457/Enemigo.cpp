#include "Enemigo.h"

#include <iostream>

using namespace std;

Enemigo::Enemigo(Tile* _tile, Texture* _enemigoTexture, int _posicionX, int _posicionY, int _ancho, int _alto, int _anchoPantalla, int _altoPantalla, int _velocidadPatron) :
	Fantasma(_tile, _enemigoTexture, _posicionX, _posicionY, _ancho, _alto, _anchoPantalla, _altoPantalla, _velocidadPatron)        
	  
{
	/*tileActual = _tile;
	tileSiguiente = nullptr;

	if (tileActual != nullptr) {
		tileActual->setEnemigo(this);
		tileSiguiente = tileGraph->getTileEn(tileActual->getPosicionX(), tileActual->getPosicionY());

		posicionX = tileActual->getPosicionX() * Tile::anchoTile;
		posicionY = tileActual->getPosicionY() * Tile::altoTile;
	}
	else {
		posicionX = 0;
		posicionY = 0;
	}

	direccionActual = MOVE_RIGHT;
	direccionSiguiente = MOVE_RIGHT;

	visible = false;

	tiempoVisible = 100;
	tiempoNoVisible = 150;
	contadorTiempoVisible = 0;
	contadorTiempoNoVisible = 0;*/
	
	// Inicializa propiedade de de pacman
	/*posicionXDestino = getPosicionX();
	posicionYDestino = getPosicionY();

	velocidadX = 1;
	velocidadY = 1;
	velocidadPatron = _velocidadPatron;*/
}
//
//void Enemigo::setTile(Tile* _tileNuevo) {
//	if (tileActual != nullptr) {
//		tileActual->setEnemigo(nullptr);
//	}
//
//	tileActual = _tileNuevo;
//
//	if (tileActual != nullptr) {
//		tileActual->setEnemigo(this);
//
//		posicionX = tileActual->getPosicionX() * Tile::anchoTile;
//		posicionY = tileActual->getPosicionY() * Tile::altoTile;
//	}
//
//}

//bool Enemigo::tratarDeMover(MoveDirection _direccionNueva) {
//	Tile* tileDestino = nullptr;
//	texture = new Texture();
//	switch (_direccionNueva) {
//	case MOVE_UP:
//		tileDestino = tileGraph->getTileEn(tileActual->getPosicionX(), tileActual->getPosicionY() - 1 );
//		break;
//	case MOVE_DOWN:
//		tileDestino = tileGraph->getTileEn(tileActual->getPosicionX() , tileActual->getPosicionY() + 1);
//		break;
//	case MOVE_LEFT:
//		tileDestino = tileGraph->getTileEn(tileActual->getPosicionX() - 1, tileActual->getPosicionY());
//		break;
//	case MOVE_RIGHT:
//		tileDestino = tileGraph->getTileEn(tileActual->getPosicionX() + 1, tileActual->getPosicionY());
//		
//		break;
//	}
//	
//	
//	
//	if (contadorTiempoVisible >= tiempoVisible) {
//		visible = false;
//		if (contadorTiempoNoVisible >= tiempoNoVisible) {
//						
//				posicionX = tileActual->getPosicionX() + rand()%anchoPantalla;
//				posicionY = tileActual->getPosicionY() + rand() % altoPantalla;
//				///Tile *tile = new Tile(posicionX, posicionY);
//				
//				
//			contadorTiempoVisible = 0;
//			contadorTiempoNoVisible = 0;
//			
//			//visible = true;
//			
//		}
//		else {
//			contadorTiempoNoVisible++;
//			
//		}
//	}
//	else {
//		contadorTiempoVisible++;
//	}
//
//	if (tileDestino == nullptr) {
//		setTileSiguiente(nullptr);
//		return false;
//	}
//	// Si el tile destino es una pared, no se puede avanzar ahi
//	if (tileDestino->getMuro() != nullptr) {
//		setTileSiguiente(nullptr);
//		return false;
//	}
//
//	/*if (tileDestino->getPared() != nullptr) {
//		setTileSiguiente(nullptr);
//		return false;
//	}*/
//
//	setTileSiguiente(tileDestino);
//
//	return true;
//}

//void Enemigo::update()
//{
//	
//
//	if (enMovimiento) {
//		GameObject::update();
//	}
//	else {
//		direccionSiguiente = MoveDirection(rand() % 6);
//	}
//
//	if (tileSiguiente == tileActual || tileSiguiente == nullptr) {
//		if (direccionSiguiente != direccionActual && tratarDeMover(direccionSiguiente))
//			direccionActual = direccionSiguiente;
//		else
//			tratarDeMover(direccionActual);
//
//		if (tileSiguiente == nullptr)
//			enMovimiento = false;
//		else
//			enMovimiento = true;
//	}
//	else {
//		switch (direccionActual) {
//		case MOVE_UP:
//			posicionY = max(posicionY - velocidadPatron, tileSiguiente->getPosicionY() * Tile::altoTile);
//			break;
//		case MOVE_DOWN:
//			posicionY = min(posicionY + velocidadPatron, tileSiguiente->getPosicionY() * Tile::altoTile);
//			break;
//		case MOVE_RIGHT:
//			posicionX = max(posicionX - velocidadPatron, tileSiguiente->getPosicionX() * Tile::anchoTile);
//			break;
//		case MOVE_LEFT:
//			posicionX = min(posicionX + velocidadPatron, tileSiguiente->getPosicionX() * Tile::anchoTile);
//			break;
//		}
//
//		if ((direccionActual == MOVE_DOWN || direccionActual == MOVE_UP) && getPosicionY() == tileSiguiente->getPosicionY() * Tile::altoTile)
//			setTile(tileSiguiente);
//
//		if ((direccionActual == MOVE_LEFT || direccionActual == MOVE_RIGHT) && getPosicionX() == tileSiguiente->getPosicionX() * Tile::anchoTile)
//			setTile(tileSiguiente);
//
//	}
//
//
//}

//bool Enemigo::visiblePersonaje() {
//	if (contadorTiempoVisible >= tiempoVisible) {
//		visible = false;
//		if (contadorTiempoNoVisible >= tiempoNoVisible) {
//
//			posicionX = tileActual->getPosicionX() + rand() % anchoPantalla;
//			posicionY = tileActual->getPosicionY() + rand() % altoPantalla;
//			///Tile *tile = new Tile(posicionX, posicionY);
//
//
//			contadorTiempoVisible = 0;
//			contadorTiempoNoVisible = 0;
//
//			//visible = true;
//
//		}
//		else {
//			contadorTiempoNoVisible++;
//
//		}
//	}
//	else {
//		contadorTiempoVisible++;
//	}
//}