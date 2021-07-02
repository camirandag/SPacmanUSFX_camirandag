#pragma once
//#include "GameObject.h"
#include "TileGraph.h"
#include "Pared.h"

class Muro :
    public Pared
{
    //atributos
//private:
    /*Tile* tileActual;*/
    //metodos 
public:
    Muro(Tile* _tile, Texture* _muroTextura, int _posicionX, int _posicionY, int _ancho, int _alto, int _anchoPantalla, int _altoPantalla);
    //metodos accesores 
    /*Tile* getTile() { return tileActual; }
    void setTile(Tile* _tileNuevo);*/
};