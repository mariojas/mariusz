#ifndef PLAYERPHYSICS_H
#define PLAYERPHYSICS_H

#include "../common/Vec.h"
#include "../logic/Player.h"

template <class Type>
class PlayerPhysics
{
public:
	void move();
	void setPlayer(Player *p);

private:
	void update();
	Player *p;
	Vec<Type> moveVector;


};

#endif