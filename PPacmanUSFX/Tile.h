#pragma once
#include <SDL.h>

class Pacman;
class Fantasma;
class Fruta;
class Moneda;
class Pared;
class Jugador;
class Ladrillo;

class Tile
{
private:
	Pacman* pacman;
	Fantasma* fantasma;
	Fruta* fruta;
	Moneda* moneda;
	Pared* pared;
	Jugador* jugador;
	Ladrillo* ladrillo;

	int posicionX;
	int posicionY;

public:
	static const int anchoTile = 25;
	static const int altoTile = 25;

public:
	Tile();
	Tile(int _x, int _y);
	Ladrillo* getLadrillo() { return ladrillo; }
	Jugador* getJugador() { return jugador; }
	Pacman* getPacman() { return pacman; }
	Fantasma* getFantasma() { return fantasma; }
	Fruta* getFruta() { return fruta; }
	Moneda* getMoneda() { return moneda; }
	Pared* getPared() { return pared; }
	int getPosicionX() { return posicionX; }
	int getPosicionY() { return posicionY; }
	void setLadrillo(Ladrillo* _ladrillo) { ladrillo = _ladrillo; }
	void setJugador(Jugador* _jugador) { jugador = _jugador; }
	void setPacman(Pacman* _pacman) { pacman = _pacman; }
	void setFantasma(Fantasma* _fantasma) { fantasma = _fantasma; }
	void setFruta(Fruta* _fruta){ fruta = _fruta; }
	void setMoneda(Moneda* _moneda) { moneda = moneda; }
	void setPared(Pared* _pared) { pared = _pared; }
	void setPosicionX(int _posicionX) { posicionX = _posicionX; }
	void setPosicionY(int _posicionY) { posicionY = _posicionY; }

};

