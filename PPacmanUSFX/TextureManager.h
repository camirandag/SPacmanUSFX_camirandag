#pragma once
#include<map>
#include "Texture.h"
using namespace std;

class TextureManager
{
private:
	map<string, Texture*> mapTexturas;

	const string pathPacmanClasico = "Resources/PacMan.bmp";
	const string pathFantasmaClasico1 = "Resources/Blinky.bmp";
	const string pathFantasmaClasico2 = "Resources/Clyde.bmp";
	const string pathFantasmaClasico3 = "Resources/Inkey.bmp";
	const string pathFantasmaClasico4 = "Resources/Pinky.bmp";
	const string pathFrutaClasico = "Resources/Frutas.png";
	const string pathMonedaClasico = "Resources/Monedas02.jpg";
	const string pathSuperMonedaClasico = "Resources/Monedas03.jpg";
	const string pathParedClasico = "Resources/WallTextures.png";



	Texture* pacmanClasicoTexture;
	Texture* fantasmaClasico1Texture;
	Texture* fantasmaClasico2Texture;
	Texture* fantasmaClasico3Texture;
	Texture* fantasmaClasico4Texture;
	Texture* frutaClasicoTexture;
	Texture* monedaClasicoTexture;
	Texture* superMonedaClasicoTexture;
	Texture* paredClasicoTexture;

	
public:
	TextureManager();
	~TextureManager();

	Texture* getTexture(string _key) { return mapTexturas[_key]; }
	void addTexture(string _key, Texture* _texture);
	void free();


};

