#pragma once
#include "GameObject.h"
#include "TileGraph.h"
class Ladrillo :
    public GameObject
{
private:
    Tile* tileActual;

public:
    Ladrillo(Tile* _tile, Texture* _ladrilloTextura, int _posicionX, int _posicionY, int _ancho, int _alto, int _anchoPantalla, int _altoPantalla);
    Tile* getTile() { return tileActual; }
    void setTile(Tile* _tileNuevo);
};