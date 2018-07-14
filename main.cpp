#include <iostream>
#include <vector>
#include "vectorClass.h"

int main() {
	
	int numVectores = 0;
	double m = 0;
	double a = 0;
	double xComps = 0;
	double yComps = 0;
	std::vector<vectorClass> vectores;
	vectorClass resultante;
	
	std::cout << "¿Cuántos vectores desea sumar? ";
	std::cin >> numVectores;
	
	for (int i = 0; i < numVectores; i++){
		//Pedir valores de cada vector
		std::cout << "Escriba los valores del vector #" << i + 1 << " en el orden Magnitud [enter o espacio] Direccion" << std::endl;
		std::cin >> m;
		std::cin >> a;
		
		//Agregar vectores al vector de vectores
		vectores.push_back(vectorClass(m, a));
		vectores[i].setComponents();
		
		//Obtener la suma de los componentes de los vectores
		xComps += vectores[i].getXComponent();
		yComps += vectores[i].getYComponent();
	}
	
	//Asignar al vector resultante la suma de los componentes
	resultante.setXComponent(xComps);
	resultante.setYComponent(yComps);
	
	//Asignar Magnitud y Direccion
	resultante.setMagnAndDir();
	
	//Mostrar resultado
	std::cout << "Magnitud del vector resultante:  " <<		resultante.getMagnitude()		<< std::endl;
	std::cout << "Direccion del vector resultante: " <<   resultante.getAngle() << "°"	 	<< std::endl;
	
	return 0;
}