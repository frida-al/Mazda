# Planta de autos Mazda

Este proyecto es para la materia Programación de estructuras de datos y algoritmos fundamentales TC1031.602

## Contexto

Una planta de autos quiere manejar de manera eficaz la cantidad de autos que produce por cada marca que trabajan. Se registran el modelo, el motor, la potencia y si, dependiendo de la marca y el modelo, existen versiones Sport, Grand Touring o Signature.

## Funcionalidad

El programa imprime un menú que le permite al usuario elegir qué información quiere obtener. Las opciones son:
1. Listar los autos ya registrados
2. Agregar autos
3. Ordenar
4. Salir

La opción número tres permite ordenar los objetos de cada marca por separado, o todas las marcas juntas.

## Consideraciones
El programa se encuentra en inglés, por lo que se le solicita al usuario que sus respuestas sean en el mismo idioma. Gracias. El programa solo corre en la consola y esta hecho con c++ standard por lo que corre en todos los sistemas operativos

compilar con: "g++ mazda.h sorts.h planta.h main.cpp"
correr en linux: "/a.out"
correr en windows: "a.exe"

## Correcciones

Versión 1.0: 13 de septiembre de 2024. El programa cuenta inicialmente con 8 clases, de las cuales 5 son clases hijas de la clase principal "Mazda". La clase "Planta" se encarga de manejar el arreglo para el polimorfismo y la clase "Sorts" se encarga de utilizar los algoritmos de ordenamiento.
*Subcompetencias*. Se implementó el método de ordenamiento Bubble Sort, y se especificó en comentarios la complejidad espacial y temporal que tiene. **Se encuentra en el archivo Sorts.h**. 

