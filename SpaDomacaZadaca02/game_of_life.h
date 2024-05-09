#ifndef _GAME_OF_LIFE_H_
#define _GAME_OF_LIFE_H_

#include <iostream>
#include <SFML/Graphics.hpp>
using namespace std;

class game_of_life {
private:
	static const unsigned int STUPACA = 20;
	static const unsigned int REDAKA = 25; // 3/4 stupaca zbog rezolucije prozora
	float cellSize = 40.f; //veličina ćelije u SFML-u
	bool generacija[REDAKA][STUPACA];
	bool sljedecaGeneracija[REDAKA][STUPACA];
	bool slucajnaVrijednost();
	bool celijaZauzeta(int i, int j) const;

	sf::RenderWindow* window;

	//grid colors
	sf::Color aliveCell = sf::Color(36, 130, 119);
	sf::Color deadCell = sf::Color(3, 102, 102);
	sf::Color outline = sf::Color(20, 116, 111);

	//flower colors
	vector<sf::Color> flowerColors =
	{
		sf::Color(102, 194, 179),
		sf::Color(244, 212, 91),
		sf::Color(232, 124, 60),
		sf::Color(216, 76, 59),
		sf::Color(224, 139, 134)
	};
public:
	game_of_life();
	void slijedecaGeneracija();
	void iscrtaj() const; //console
	void draw(sf::RenderWindow& window) const; //SFML
};
#endif
