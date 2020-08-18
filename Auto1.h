#ifndef AUTO1_H
#define AUTO1_H
#include <ctime>

/********/
/** Auto 1 **/
/********/
class Auto1:public Auto{
public:
	//ESTOS SON LAS FUNCIONES UNICAS QUE ESTA CLASE TIENE 
	Auto1(int vel, int x0,int y0);
	Auto1(){};
	bool update();
};


#endif
