#include <cmath>
#include "vectorClass.h"

const long double pi = acos(-1.0L);

//A partir de los componentes calcula la magnitúd y la dirección del Vector
void vectorClass::setMagnAndDir(){
	dMagnitude = sqrt(pow(dXComponent, 2)+ pow(dYComponent, 2));
	double dir = atan(dYComponent / dXComponent) * 180 / pi;
	
	//Ajustar a un ángulo conocido (común)
	if (dXComponent >= 0 && dYComponent >= 0) {
		dAngle = dir;
		return;
	}

	if (dXComponent < 0 && dYComponent > 0) {
		dAngle =  180 + dir;
		return;
	}

	if (dXComponent < 0 && dYComponent <= 0) {
		dAngle = 180 + dir;
		return;
	}

	if (dXComponent >= 0 && dYComponent < 0) {
		dAngle = 360 + dir;
	}
}



//A partir de la magnitud y la dirección del vector calcula los componentes
void vectorClass::setComponents(){
	dXComponent = dMagnitude * cos(dAngle * pi / 180);
	dYComponent = dMagnitude * sin(dAngle * pi / 180);
}



//Constructor usado para agregar nuevos vectores en el for loop de main.cpp
vectorClass::vectorClass(double m, double a){
	dMagnitude = m;
	dAngle = a;
	dXComponent = 0;
	dYComponent = 0;
}

//Constructor usado para inicializar el vector resultante con todas sus
//variables a cero en main.cpp
vectorClass::vectorClass(){
	dMagnitude = 0;
	dAngle = 0;
	dXComponent = 0;
	dYComponent = 0;
}