# Planta de autos Mazda

Este proyecto es para la materia Programación de estructuras de datos y algoritmos fundamentales TC1031.602

## Contexto

Una planta de autos quiere manejar de manera eficaz la cantidad de autos que produce por cada marca que trabajan. Se registran el modelo, el motor, la potencia y si, dependiendo de la marca y el modelo, existen versiones Sport, Grand Touring o Signature.

## Funcionalidad

El programa imprime un menú que le permite al usuario elegir qué información quiere obtener. Las opciones son:
1. Listar los autos ya registrados
2. Agregar 
3. Buscar autos
4. Borrar autos
5. Borrar del inventario
6. Salir

La opción número tres permite ordenar los objetos de cada marca por modelo o por cantidad de autos. La opción cuatro crea un stack de los objetos y pide al usuario cuántos de estos objetos quiere borrar. La opción imprime el stack original y el stack ya modificado, sin embargo, se imprimen las ubicaciones en memoria del objeto. Después de borrar, al escoger la opción 1, los objetos eleminados en la opción anterior ya no aparecen. La opción 5 permite borrar objetos del inventario. El inventario se carga a partir de un archivo externo, en este caso, un .csv. Asímismo, en la opción de agregar, se muestra un menú que permite agregar objetos al inventario, que se escriben en el archivo .csv.

## Consideraciones
El programa se encuentra en inglés, por lo que se le solicita al usuario que sus respuestas sean en el mismo idioma. Gracias. El programa solo corre en la consola y esta hecho con c++ standard por lo que corre en todos los sistemas operativos

compilar con: "g++ mazda.h sorts.h planta.h stack.h inventario.h list.h main.cpp"
correr en linux: "/a.out"
correr en windows: "a.exe"

## Correcciones

Versión 1.0: 13 de septiembre de 2024. El programa cuenta inicialmente con 8 clases, de las cuales 5 son clases hijas de la clase principal "Mazda". La clase "Planta" se encarga de manejar el arreglo para el polimorfismo y la clase "Sorts" se encarga de utilizar los algoritmos de ordenamiento.
*Subcompetencias*. Se implementó el método de ordenamiento Bubble Sort, y se especificó en comentarios la complejidad espacial y temporal que tiene. **Se encuentra en el archivo sorts.h**. 

Versión 2.0: 12 de octubre de 2024. El programa utiliza la estructura lineal 'stack' para implementar la opción 'borrar' en el menú. Se borran los objetos completamente del programa mientras este en uso.
*Subcompetencias* Se implementó la estructura de datos **Stack** para implementar el delete de objetos, además de que se especificó en comentarios la complejidad espacial y temporal que tiene. **Se encuentra en el archivo stack.h**.

Versión 3.0: 08 de noviembre de 2024. Para esta entrega se agregaron las funciones que permiten la lectura de objetos desde un archivo así como la escritura de objetos que han sido creados dentro del programa. Se agregó la clase "Inventario", dónde se leen objetos desde un archivo .csv. Estos objetos son piezas de autos y las cantidades que existen en el inventario. Asímismo, se agregó la clase "List.h", que es una estructura de datos lineal, la lista ligada. Esat lista se crea de los objetos del inventario y pueden eliminarse también. Se completaron los comentarios en el código y se hicieron algunas pequeñas modificaciones. 
*Subcompetencias* Se implementaron los métodos de lectura y escritura de archivos externos, en este caso, un .csv

Versión 4.0: 11 de noviembre de 2024. Para esta corrección se agregó la complejidad final tanto de estructuras y funciones individualmente como la complejidad final. 
Como estructuras, se utilizan principalemte dos, una lista ligada y un stack. Se usan vectores para el ordenamiento.
- Stack. Tiene complejidad espacial de O(n), y complejidad temporal en el peor de los casos de la siguiente manera:
 * 	Access: O(n)
 * 	Search: O(n)
 * 	Insertion: O(1)
 * 	Deletion: O(1)
- Linked list. Tiene complejidad espacial de O(m), y complejidad temporal en el peor de los casos de la siguiente manera:
 * Access: O(m)
 * 	Search: O(m)
 * 	Insertion: O(1)
 * 	Deletion: O(1)
Como algoritmo de ordenamiento utilicé Bubble Sort, ya que no utiliza memoria adicional, lo que presenta una ventaja frente al Merge Sort, además de que no se maneja una cantidad muy grande de datos. El algoritmo ordena los datos de los autos por dos parámetros, ya sea por cantidad o por modelo. Después, la opción 3 del menú le permite al usuario aplicar el filtro.
- Bubble sort. Tiene complejidad espacial de O(1) y complejidad temporal en el peor de los casos de O(n^2).

Al comenzar el programa, un ciclo for se encarga de cargar los objetos provenientes del archivo .csv a la lista ligada. Este ciclo for tiene una complejidad temporal de O(m), ya que no es valor fijo porque se pueden ir agregando objetos al archivo externo. La complejidad espacial también es O(n), ya que se guardan todos los objetos y varían dependiendo de cuántos de estos hay en el archivo .csv.

En resumen, el programa tiene una complejidad temporal total de O(2n + n^2 + 3m). 
