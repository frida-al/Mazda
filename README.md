# Planta de autos Mazda

Este proyecto es para la materia Programación de estructuras de datos y algoritmos fundamentales TC1031.602

## Contexto

Una planta de autos quiere manejar de manera eficaz la cantidad de autos que produce por cada marca que trabajan. Se registran el modelo, el motor, la potencia y si, dependiendo de la marca y el modelo, existen versiones Sport, Grand Touring o Signature.

## Funcionalidad

El programa imprime un menú que le permite al usuario elegir qué información quiere obtener. Las opciones son:
1. Listar los autos ya registrados
2. Agregar autos
3. Ordenar
4. Borrar
5. Salir

La opción número tres permite ordenar los objetos de cada marca por modelo o por cantidad de autos. La opción cuatro crea un stack de los objetos y pide al usuario cuántos de estos objetos quiere borrar. La opción imprime el stack original y el stack ya modificado, sin embargo, se imprimen las ubicaciones en memoria del objeto. Después de borrar, al escoger la opción 1, los objetos eleminados en la opción anterior ya no aparecen.

## Consideraciones
El programa se encuentra en inglés, por lo que se le solicita al usuario que sus respuestas sean en el mismo idioma. Gracias. El programa solo corre en la consola y esta hecho con c++ standard por lo que corre en todos los sistemas operativos

compilar con: "g++ mazda.h sorts.h planta.h main.cpp"
correr en linux: "/a.out"
correr en windows: "a.exe"

## Correcciones

Versión 1.0: 13 de septiembre de 2024. El programa cuenta inicialmente con 8 clases, de las cuales 5 son clases hijas de la clase principal "Mazda". La clase "Planta" se encarga de manejar el arreglo para el polimorfismo y la clase "Sorts" se encarga de utilizar los algoritmos de ordenamiento.
*Subcompetencias*. Se implementó el método de ordenamiento Bubble Sort, y se especificó en comentarios la complejidad espacial y temporal que tiene. **Se encuentra en el archivo sorts.h**. 
Versión 2.0: 12 de octubre de 2024. El programa utiliza la estructura lineal 'stack' para implementar la opción 'borrar' en el menú. Se borran los objetos completamente del programa mientras este en uso.
*Subcompetencias* Se implementó la estructura de datos **Stack** para implementar el delete de objetos, además de que se especificó en comentarios la complejidad espacial y temporal que tiene. **Se encuentra en el archivo stack.h**.
