/**
* Proyecto Planta de autos
* Frida Arcadia Luna
* A01711615
* 08 de noviembre 2024
*/
#ifndef LIST_H
#define LIST_H
#include <string>
#include <sstream>
/**
 * Space complexity 
 * Time complexity:
 * 	Access: 
 * 	Search: 
 * 	Insertion: 
 * 	Deletion: 
*/ 

template <class T> class List;

template <class T> 
class Node{

   private:
   Node<T>* head;
    Node<T>(T val) : value(val), next(0) {}
    Node<T>(T val, Node * nxt) : value(val), next(nxt) {}
    Node<T>(const Node <T> &source)  : value(source.value), next(source.next) {}
    T	    value;
	Node<T> *next;

	friend class List<T>;

};

template <class T>
class List {

    private:
    Node<T> *head;
	int 	size;

    public:
    List() : head(0), size(0) {}
    ~List() {
	    clear();
        }
    bool empty() const {
	return (head == 0);
    }
    void clear() {
        Node<T> *p, *q;

        p = head;
        while (p != 0) {
            q = p->next;
            delete p;
            p = q;
        }
        head = 0;
        size = 0;
    }

std::string toString() const {
        std::stringstream aux;
        Node<T>* p = head;

        aux << "[";
        while (p != nullptr) {
            aux << p->value.toString(); 
            if (p->next != nullptr) {
                aux << ", ";
            }
            p = p->next;
        }
        aux << "]";
        return aux.str();
    }
    void insertion(T val){
        Node<T> *newNode, *p;
        newNode = new Node<T>(val);
        if (head == 0){
            head = newNode;
        }
        else {
            Node<T> *p = head;
            while (p->next != 0){
                p = p-> next;
            }
            p->next = newNode;
        }
    }
    T search(T val){
        int cont = 0;
        Node<T> *p = head;
        while (p != nullptr && p->value != val) {
        p = p->next;
        cont++;
        }
        if (p == nullptr) { 
            return -1;
        } 
        else {
            return cont;
        }
        
    }

    void update(int index, T val){
        int cont = 0;
        Node<T> *p = head;
        while (cont != index){
            p = p-> next;
            cont++;
            if (cont == index){
                p->value = val;
            }
        }      
    }

    void deleteAt(int index){
        int cont = 0;
        Node<T> *p = head;
        Node<T> *aux;
        if (index == 0){
            p = p->next;
            delete head;
            head = p;
        }
        else if (index != 0){
            while (cont < index - 1) {
                cont++;
                p = p->next;
            }
        aux = p->next; 
        p->next = aux->next; 
        delete aux; 
        }
    }
};

#endif