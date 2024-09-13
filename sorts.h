/**
* Proyecto Planta de autos
* Frida Arcadia Luna
* A01711615
* 09 de septiembre 2024
*/

#ifndef SORTS_H
#define SORTS_H

#include <vector>

template <class T>
class Sorts{

    private: 
    void swap(std::vector<T> &vec, int i, int  j){
        T aux = vec[i];
	    vec[i] = vec[j];
	    vec[j] = aux;
    }
    public:
    //Complejidad temporal en el peor de los casos: O(n^2)
    //Comlejidad espacial en el peor de los casos: O(1)
     void ordenaBurbuja(std::vector<T> &vec){
        for(int i = vec.size() -1;i > 0; i-- ){
			for(int j = 0; j < i; j++){
				if(vec[j] > vec[j+1]){
					swap(vec, j, j+1);
				}
			}
		}
    }

};
#endif // SORTS_HS