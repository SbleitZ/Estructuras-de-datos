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
    bool empty();
    int size();
    element_t top();
    element_t last();
    void push(element_t);
    element_t pop();
    element_t* data();
    bool some(element_t );
    int find(element_t);
    void replaceAll(element_t search_value, element_t replace_value);//Reemplaza todos los elementos que coincidan con el elemento buscado.
};