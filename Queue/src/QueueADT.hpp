#include "IQueue.hpp"

struct Node{
  element_t e;
  Node *next;
  Node *prev;
};

class QueueADT : public IQueue{
  private:
    Node *__top;
    Node *__tail;
    unsigned size_q;
  public:
    QueueADT();
    ~QueueADT();
    // Retorna si la cola esta vacio o no.
    bool empty();
    // Retorna el tamaño de la cola.
    int size();
    //Entrega el ultimo elemento añadido
    element_t top();
    // Entrega el primer elemento añadido
    element_t last();
    // añade un elemento.
    void push(element_t);
    // Elimina un elemento.
    element_t pop();
    // Entrega los datos almacenados.
    element_t* data();
    //consulta si el elemento pasado por parametro existe
    bool some(element_t );
    // busca un elemento y devuelve el indice, en caso de no encontrarlo devuelve -1 
    int find(element_t);
    //Reemplaza todos los elementos que coincidan con el elemento buscado.
    void replaceAll(element_t search_value, element_t replace_value);
    //Busca un elemento según el indice indicado, se pueden usar indices negativos, es decir miQueue->at(-1) devolvuelve el ultimo elemento y así sucesivamente
    element_t at(int index);
};