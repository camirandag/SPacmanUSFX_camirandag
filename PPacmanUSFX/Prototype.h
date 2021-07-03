#pragma once
#include <iostream>
#include <string>
#include "GameObject.h"
#include "FantasmaClasico.h"
#include "Factory.h"
#include "FactoryPacmanClasico.h"
#include "Fantasma.h"
#include "FantasmaClasico.h"
using namespace std;

/* Prototype base class. */
class Prototype
{
protected:
	FantasmaClasico* fantasmita;
	//int value;
	/*int posicionX;
	int posicionY;*/

public:
	virtual Prototype* clone() = 0;

	FantasmaClasico* getPhantasm() { return fantasmita; }
	//int getValue() { return value; }
};

class ConcretePrototype1 : public FantasmaClasico, public Prototype, public GameObject, public Fantasma
{

public:
	ConcretePrototype1(Tile* _tile, TextureManager* _textureManager, int _posicionX, int _posicionY, int _velocidad) :

	{
		FantasmaClasico* fantasmita = FantasmaClasico(_tile, _textureManager->getTexture("fantasma_clasico1"), _posicionX, _posicionY, _velocidad);
	}
	Prototype* clone()
	{
		return new ConcretePrototype1(*this);
	}
};

/* Factory that manages prorotype instances and produces their clones. */
class ObjectFactory
{
	static Prototype* type1value1;
	static Prototype* type1value2;

public:
	static void  initialize()
	{
		Prototype* type1value1 = new ConcretePrototype1(Tile * _tile, TextureManager * _textureManager, int _posicionX, int _posicionY, int _velocidad) override;
		Prototype* type1value2 = new ConcretePrototype1(Tile * _tile, TextureManager * _textureManager, int _posicionX, int _posicionY, int _velocidad) override;
	}

	static Prototype* getType1Value1()
	{
		return type1value1->clone();
	}

	static Prototype* getType1Value2()
	{
		return type1value2->clone();
	}
};
Prototype* ObjectFactory::type1value1 = 0;
Prototype* ObjectFactory::type1value2 = 0;
