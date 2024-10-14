/**
* Proyecto Planta de autos
* Frida Arcadia Luna
* A01711615
* 12 de octubre 2024
*/
#ifndef STACK_H
#define STACK_H

#include <string>
#include <sstream>
#include <list>

/**
 * Space complexity O(n)
 * Time complexity:
 * 	Access: O(n)
 * 	Search: O(n)
 * 	Insertion: O(1)
 * 	Deletion: O(1)
*/ 
template <class T>
class Stack {
public:
	virtual void push(T) = 0;
	virtual T top() const  = 0;
	virtual void pop()  = 0;
	virtual bool empty() const = 0;
	virtual void clear() = 0;
	virtual std::string toString() const = 0;
};

template <class T>
class StackVector : public Stack<T> {
private:
	unsigned int next;
	unsigned int size;
	T 			 *data;

public:
	StackVector(unsigned int) ;
	~StackVector();
	void push(T) ;
	T top() const ;
	void pop() ;
	bool empty() const;
	void clear();
	std::string toString() const;
};

template <class T>
StackVector<T>::StackVector(unsigned int sze)  {
	size = sze;
	data = new T[size];
	if (data == 0) {
		std::cout << "Error";
	}
	next = 0;
}

template <class T>
StackVector<T>::~StackVector() {
	delete [] data;
	data = 0;
	next = 0;
}

template <class T>
void StackVector<T>::push(T val)  {
	if (next == size ) {
		std::cout << "Error";
	}
	data[next++] = val;
}

template <class T>
T StackVector<T>::top() const  {
	if (empty()) {
		std::cout << "Error";
	}
	return data[next - 1];
}

template <class T>
void StackVector<T>::pop()  {
	if (empty()) {
		std::cout << "Error";
	}
	next--;
}

template <class T>
bool StackVector<T>::empty() const {
	return (next == 0);
}

template <class T>
void StackVector<T>::clear() {
	next = 0;
}

template <class T>
std::string StackVector<T>::toString() const {
	std::stringstream aux;

	aux << "[";
	if (next > 0) {
		aux << data[0];
		for (int i = 1; i < next; i++) {
			aux << ", " << data[i];
		}
	}
	aux << "]";
	return aux.str();
}

#endif //STACK_H