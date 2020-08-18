#ifndef AUTO2_H
#define AUTO2_H
#include <ctime>

/********/
/** Auto 2 **/
/********/

class Auto2:public Auto{
protected:
	/*AUTO 2 Y 3 comparten dos atributos, asi que decidi que AUTO 3 herede
	todo de AUTO 2*/
	bool cambio;
	int colorAuto;
	
public:
	Auto2(int vel, int x0,int y0);
	Auto2(){};
	void Cambio();
	void update();
};



#endif

