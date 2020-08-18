#ifndef AUTO3_H
#define AUTO3_H
#include <ctime>

/********/
/** Auto 3 **/
/********/

class Auto3:public Auto2{
public:
	Auto3(int vel, int x0,int y0);
	Auto3(){};
	void Colorear();
	void update();
};

#endif

