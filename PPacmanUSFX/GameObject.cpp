#include "GameObject.h"
int GameObject::numeroObjetosCreados = 0;
GameObject::GameObject()
{
	texture = nullptr;
	ancho = 0;
	alto = 0;
}
GameObject::GameObject(int _posicionX, int _posicionY, int _ancho, int _alto, int _anchoPantalla, int _altoPantalla) {
	posicionX = _posicionX;
	posicionY = _posicionY;
	ancho = _ancho;
	alto = _alto;
	anchoPantalla = _anchoPantalla;
	altoPantalla = _altoPantalla;
	visible = true;
	numeroObjetosCreados++;
	idObjeto = numeroObjetosCreados;
	texture = nullptr;
	ancho = 0;
	alto = 0;
}
void GameObject::render() {};
// sinze here paste the Texture.cpp
//#include "Texture.h"
SDL_Renderer* renderer = nullptr;

bool GameObject::loadFromImage(std::string path, Uint8 r, Uint8 g, Uint8 b)
{
	free();
	if (renderer == nullptr)
		return false;
	SDL_Surface* loadedSurface = IMG_Load(path.c_str());
	if (loadedSurface == nullptr) {
		printf("Unable to load image %s! SDL Error: %s\n", path.c_str(), SDL_GetError());
		return false;
	}
	SDL_SetColorKey(loadedSurface, SDL_TRUE, SDL_MapRGB(loadedSurface->format, r, g, b));
	texture = SDL_CreateTextureFromSurface(GameObject::renderer, loadedSurface);
	if (texture == nullptr) {
		printf("Unable to create texture from surface %s! SDL Error: %s\n", path.c_str(), SDL_GetError());
		return false;
	}
	ancho = loadedSurface->w;
	alto = loadedSurface->h;
	SDL_FreeSurface(loadedSurface);
	return true;
}
bool GameObject::loadFromRenderedText(TTF_Font* font, std::string text, SDL_Color textColor)
{
	free();
	if (renderer == NULL)
		return false;
	SDL_Surface* loadedSurface = TTF_RenderText_Solid(font, text.c_str(), textColor);
	if (loadedSurface == NULL) {
		printf("Unable to render text! SDL_ttf Error: %s\n", TTF_GetError());
		return false;
	}
	texture = SDL_CreateTextureFromSurface(GameObject::renderer, loadedSurface);
	if (texture == nullptr) {
		printf("Unable to create texture from surface! SDL Error: %s\n", SDL_GetError());
		return false;
	}
	ancho = loadedSurface->w;
	alto = loadedSurface->h;
	SDL_FreeSurface(loadedSurface);
	return true;
}
void GameObject::render(int x, int y, SDL_Rect* clip, double angle, SDL_Point* center, SDL_RendererFlip renderFlip)
{
	if (renderer == nullptr)
		return;
	SDL_Rect renderQuad = { x, y, getAncho(), getAlto() };
	if (clip != NULL) {
		renderQuad.w = clip->w;
		renderQuad.h = clip->h;
	}
	SDL_RenderCopyEx(renderer, texture, clip, &renderQuad, angle, center, renderFlip);
}
void GameObject::setColor(Uint8 red, Uint8 green, Uint8 blue)
{
	SDL_SetTextureColorMod(texture, red, green, blue);
}
void GameObject::setBlendMode(SDL_BlendMode blendMode)
{
	SDL_SetTextureBlendMode(texture, blendMode);
}
void GameObject::setAlpha(Uint8 alpha)
{
	SDL_SetTextureAlphaMod(texture, alpha);
}
void GameObject::free()
{
	if (texture != nullptr) {
		// Free the texture and set its pointer to NULL
		SDL_DestroyTexture(texture);
		texture = nullptr;
		ancho = 0;
		alto = 0;
	}
}

