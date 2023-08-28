#include "IStack.hpp"

struct Node
{
  element_t e;
  //Node *back;
  Node *next;
};

class StackADT : public IStack{
  private:
    Node * __top;
    Node * __tail;
    unsigned int size_s;
  public:
    StackADT();
    ~StackADT();
    //Retorna si la pila esta vacia o no.
    bool empty();
    //Retorna el tamaño de la pila.
    int size();
    //Retorna el ultimo elemento de la pila.
    element_t top();
    //Agrega un elemento al final de la pila.
    void push(element_t);
    //Elimina y retorna el ultimo elemento de la pila.
    element_t pop();
    //Retorna un arreglo con todos los elementos de la pila.
    element_t* data();
};