#include "IQueue.hpp"

class QueueADT : public IQueue{
  private:
  public:
    QueueADT();
    ~QueueADT();
    bool empty();
    int size();
    element_t top();
    void push(element_t);
    void pop();
};