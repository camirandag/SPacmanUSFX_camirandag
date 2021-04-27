#pragma once
#include <iostream>
#include <string>
#include "Texture.h"

#include <SDL.h>
#include <SDL_ttf.h>
#include <SDL_image.h>
using namespace std;

class GameObject
{
public:
	string nombre;
protected:
	// Posicion en el eje X y Y
	int idObjeto;
	int posicionX;
	int posicionY;
	
	// Ancho y Alto de la imagen del objeto en pixeles
	int ancho;
	int alto;

	// Ancho y alto de la pantalla del juego
	int anchoPantalla;
	int altoPantalla;

	// Si el objeto es visible
	bool visible;
	bool eliminar;

	/*Texture* texturaObjeto;*/
private:
	int Textureancho;
	int Texturealto;
public:
	SDL_Texture* texture;
	static SDL_Renderer* renderer;
	bool loadFromImage(std::string path, Uint8 r = 0, Uint8 g = 0, Uint8 b = 0);
	bool loadFromRenderedText(TTF_Font* font, std::string text, SDL_Color textColor);
	void render(int x, int y, SDL_Rect* clip = NULL, double angle = 0.0, SDL_Point* center = NULL, SDL_RendererFlip renderFlip = SDL_FLIP_NONE);
	void setColor(Uint8 red, Uint8 green, Uint8 blue);
	void setBlendMode(SDL_BlendMode blendMode);
	void setAlpha(Uint8 alpha);
	void free();
	int getTAncho() { return Textureancho; }
	int getTAlto() { return Texturealto; }

public:
	static int numeroObjetosCreados;
	GameObject* texturaObjeto;
public:
	//Constructores y destructores
	GameObject();
	GameObject(int _posicionX, int _posicionY, int _ancho, int _alto, int _anchoPantalla, int _altoPantalla);
	~GameObject();
	//Metodos accesores
	int getIdObjeto() { return idObjeto; }
	int getPosicionX() { return posicionX; }
	int getPosicionY() { return posicionY; }
	int getAncho() { return ancho; }
	int getAlto() { return alto; }
	int getAnchoPantalla() { return anchoPantalla; }
	int getAltoPantalla() { return altoPantalla; }
	bool getVisible() { return visible; }

	void setPosicionX(int _posicionX) { posicionX = _posicionX; }
	void setPosicionY(int _posicionY) { posicionY = _posicionY; }
	void setAncho(int _ancho) { ancho = _ancho; }
	void setAlto(int _alto) { alto = _alto; }
	void setAnchoPantalla(int _anchoPantalla) { anchoPantalla = _anchoPantalla; }
	void setAltoPantalla(int _altoPantalla) { altoPantalla = _altoPantalla; }
	void setVisible(bool _visible) { visible = _visible; }
	virtual void render();
	virtual void move() {};
	virtual void update() { /*No se hace nada*/ };
	virtual void mostrar() {};
	virtual void handleEvent(SDL_Event& e) {};
};
//class Texture
//{
//private:
//	SDL_Texture* texture;
//	int ancho;
//	int alto;
//public:
//	static SDL_Renderer* renderer;
//	Texture();
//	~Texture();
//	bool loadFromImage(std::string path, Uint8 r = 0, Uint8 g = 0, Uint8 b = 0);
//	bool loadFromRenderedText(TTF_Font* font, std::string text, SDL_Color textColor);
//	void render(int x, int y, SDL_Rect* clip = NULL, double angle = 0.0, SDL_Point* center = NULL, SDL_RendererFlip renderFlip = SDL_FLIP_NONE);
//	void setColor(Uint8 red, Uint8 green, Uint8 blue);
//	void setBlendMode(SDL_BlendMode blendMode);
//	void setAlpha(Uint8 alpha);
//	void free();
//	int getAncho() { return ancho; }
//	int getAlto() { return alto; }
//};

