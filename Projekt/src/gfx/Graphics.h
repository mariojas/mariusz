#ifndef GRAPHICS_H
#define GRAPHICS_H

#include "../logic/Player.h"
#include "../map/Platform.h"
#include "../map/Map.h"
#include "Drawable.h"
#include <vector>


class Graphics
{
public:
	void init(); // inicjuje (tworzy) okno gry
	void drawWindow(); // rysuje okno gry
	void loadMapDatas(Map *map); // zapisuje w pola dane potrzebne do rysowania element�w mapy pobrane z instancji klasy Map
	void loadPlayer(Player *_p); // zapisuje wska�nik na gracza do pola p



private:

	std::vector<Platform> platforms; // kontener zawieraj�cy instancj� klasy Platform, ale tylko te kt�re maj� zosta� wy�wietlone na ekranie
	std::vector<BITMAP*> platform_bitmaps; // kontener zawieraj�cy przygotowane do wy�wietlenia bitmapy platform

	std::vector<Drawable> graphics; // kontener zawierajacy wszystkie obiekty ktore maja zostac narysowane na buforze

	BITMAP *buffer;
	Player *p;

	static const int RESOLUTION_WIDTH = 800; // tych stalych nalezy uzyc do okreslania rozdzielczosci okna
	static const int RESOLUTION_HEIGHT = 600;

};

#endif