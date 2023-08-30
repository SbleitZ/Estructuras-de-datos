#include <iostream>
#include "./src/QueueADT.hpp"
int main(){
  QueueADT *miQueue = new QueueADT();
  miQueue->push(15);
  miQueue->push(20);
  miQueue->push(30);
  miQueue->push(60);
  miQueue->push(80);
  miQueue->push(100);
  std::cout<<"ultimo : "<<miQueue->last()<<std::endl;
  miQueue->pop();
  std::cout<<"ultimo : "<<miQueue->last()<<std::endl;
  miQueue->pop();
  std::cout<<"ultimo : "<<miQueue->last()<<std::endl;

  
  std::cout<<"Size : "<<miQueue->size()<<std::endl;
  return 0;
}