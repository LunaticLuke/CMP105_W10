#include "Framework/TileMap.h"
#include "Framework/GameObject.h"

#pragma once
class MarioTilemap : public GameObject
{

public:
	MarioTilemap();
	void Render(sf::RenderWindow* wind);
private:
	TileMap marioTilemap;
	sf::Texture texture;
	GameObject tile;
	std::vector<GameObject> tiles;
};

