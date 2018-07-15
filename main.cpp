#include <iostream>
#include <vector>
#include <iostream>
#include "vectorClass.h"

int main() {
	//Definiciones de variables
	double m = 0;									//Magnitud del vector
	double a = 0;									//Direccion del vector
	double xComps = 0;								//Componente x del vector
	double yComps = 0;								//Componente y del vector
	std::vector<vectorClass> vectores;				//Lista de vectores
	int numVectores = 0;							//Número de vectores a sumar
	vectorClass resultante;							//Vector Resultante
	
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
	std::cout << "Direccion del vector resultante: " <<   resultante.getAngle() << "°";
	if (resultante.getAngle() == 360){
		std::cout << " (0°)";
	}
	std::cout << std::endl;
		
	return 0;
}