# SumaDeVectores
**Descripción**
Un proyecto hecho para preparatoria que realiza una suma entre varios vectores programado en C++. La idea original era usar objetos Vector para realizar la suma. Después de una cantidad de versiones la idea fue descartada porque el Creador (yo) aprendió sobre las clases y objetos.
_Entrada:_
> ¿Cuántos vectores desea sumar?
> Escriba los valores del vector #1 en el orden Magnitud [enter o espacio] Direccion
> Escriba los valores del vector #2 en el orden Magnitud [enter o espacio] Direccion
>.
>.
>.

_Salida:_
> Magnitud del vector resultante: [Float]
> Direccion del vector resultante: [Float]°

**Ejemplo:**
> ¿Cuántos vectores desea sumar? 2
> Escriba los valores del vector #1 en el orden Magnitud [enter o espacio] Direccion
> 20 60
> Escriba los valores del vector #2 en el orden Magnitud [enter o espacio] Direccion
> 30 110
> Magnitud del vector resultante:  45.512
> Direccion del vector resultante: 90.3281°
> X-component: -0.260604  Y-component 45.5113


**CHANGE LOG (Original):**
```
Notas de la version:

Version 1.1 -----------------------------------
-	Arreglado bug en los grados del vector que mostraba grados negativos.
-	!Ahora no tienes que volver a abrir el programa para cada vector nuevo!

Hecho por Vicente Garza Reyna el 8 de agosto del 2017.

Version 1.2 -----------------------------------
-	Corregido error que producia un truncamiento de una variable de double a 
	float.

Hecho por Vicente Garza Reyna el 8 de agosto del 2017.

Version 1.3 -----------------------------------
-	PI ahora es unas tres veces mas preciso.
	C++ utiliza el sistema de radianes para ejecutar las funciones trigonometricas, por 
	lo tanto es necesaria una convercion de grados a radianes y visceversa para mostrar
	las funciones de la forma correcta.

Hecho por Vicente Garza Reyna el 12 de agosto del 2017.

Version 1.4 -----------------------------------
-	Arreglado cualquier error que pudiera haber al convertir de componentes del
	vector resultante a grados.
-	El documento de texto "Change log"  esta ahora mas ordenado para facilitar la
	lectura y se agregaron los puntos finales despues de cada frase.

Hecho por Vicente Garza Reyna el 16 de agosto del 2017.

Version 1.5 -----------------------------------
-	Los vectores han sido convertidos en una única clase.
-	El programa ahora permite sumar más de 2 vectores.
-	El código ha sido optimizado y limpiado.
-	Se han agregado comentarios en zonas clave del código.

Hecho por Vicente Garza Reyna el 13 de julio del 2018.

Version 1.6 (Fragmento perdido)

Version 1.7
-	Errores de ortografía corregidos (comentarios).
-	Codigo para debugging
-	Ahora se muestran los componentes del vector resultante

Hecho por Vicente Garza Reyna el 28 de julio del 2018.
```
