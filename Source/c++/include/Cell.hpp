#pragma once

#include <SFML/System/Vector2.hpp>
#include "DrawbleObject.hpp"

class Cell sealed : public DrawbleObject
{
	const sf::Vector2i m_id;

	static sf::Vector2i m_ammount;

	static sf::Vector2f m_dimensions;

	short m_state;

	void updateTexture();

	static void fillVector(sf::Vector2f dimensions,sf::Vector2i ammount, sf::RenderWindow *window);

	size_t computeNeighborHeads();

	int nextValue;

	bool exist(size_t number);

	
public:
	Cell(sf::Vector2i id, sf::RenderWindow *window);

	void SetState(short value);
	short GetState();
	void ChangeState();

	void Clear();

	void PrepareUpdate();
	void ConfirmUpdate();

	static void Init(sf::Vector2f dimensions, sf::Vector2i ammount, sf::RenderWindow *window);

	static std::vector<Cell> cells;

	static enum
	{
		HEAD = 0,
		TAIL = 1,
		EMPTY = 2,
		GUIDE = 3
	};
};