#ifndef JUEGO_H
#define JUEGO_H
#include "Auto1.h"
#include "Auto2.h"
#include "Auto3.h"


/********/
/** Clase Juego **/
/********/

class Juego{
	
	int teclas[4];
	Auto1 auto1;
	Auto2 auto2;
	Auto3 auto3;
	int checkCollision();
	
	
public:
	Juego();
	void play();
	
};

#endif

