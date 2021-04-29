#pragma once
#include "GameObject.h"
#include <SDL.h>
#include "Texture.h"
enum PODER_PARED {
    PODER_PARED_NINGUNO,
    PODER_PARED_CRECIMIENTO,
    PODER_PARED_COMER,
    PODER_PARED_VELOCIDAD,
    PODER_PARED_SALTO
};
class Pared :
    public GameObject
{
private:
    int valor;
    PODER_PARED tipoPoderPared;
    int tiempoPoderPared;

public:
    Pared(Texture* _paredTexture, int _posicionX, int _posicionY, int _ancho, int _alto, int _anchoPantalla, int _altoPantalla);
    int getValor() { return valor; }
    PODER_PARED getTipoPoderMoneda() { return tipoPoderPared; }
    int getTiempoPoderPared() { return tiempoPoderPared; }

    void setValor(int _valor) { valor = _valor; }
    void setTipoPoderPared(PODER_PARED _poderPared) { tipoPoderPared = _poderPared; }
    void setTiempoPoderPared(int _tiempoPoderPared) { tiempoPoderPared = _tiempoPoderPared; }

    //void render();
};


/*
enum PODER_MONEDA {
    PODER_MONEDA_NINGUNO,
    PODER_MONEDA_CRECIMIENTO,
    PODER_MONEDA_COMER,
    PODER_MONEDA_VELOCIDAD,
    PODER_MONEDA_SALTO
};


class Moneda :
    public GameObject
{
private:
    int valor;
    PODER_MONEDA tipoPoderMoneda;
    int tiempoPoderMoneda;

public:
    Moneda(Texture* _monedaTextura, int _posicionX, int _posicionY, int _ancho, int _alto, int _anchoPantalla, int _altoPantalla);

    int getValor() { return valor; }
    PODER_MONEDA getTipoPoderMoneda() { return tipoPoderMoneda; }
    int getTiempoPoderMoneda() { return tiempoPoderMoneda; }

    void setValor(int _valor) { valor = _valor; }
    void setTipoPoderMoneda(PODER_MONEDA _poderMoneda) { tipoPoderMoneda = _poderMoneda; }
    void setTiempoPoderMoneda(int _tiempoPoderMoneda) { tiempoPoderMoneda = _tiempoPoderMoneda; }

    //void render();

};
*/