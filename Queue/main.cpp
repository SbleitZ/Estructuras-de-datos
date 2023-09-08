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
  std::cout<<"Elemento buscado de forma negativa: "<<miQueue->at(2)<<std::endl;
  std::cout<<"Elemento buscado de forma negativa: "<<miQueue->at(-2)<<std::endl;
  element_t *mi;
  mi = miQueue->data();
  for (int i = 0; i < miQueue->size(); i++)
  {
    std::cout <<i<<". " << mi[i] << std::endl;
  }
  miQueue->replaceAll(100,30);
  mi = miQueue->data();
  for (int i = 0; i < miQueue->size(); i++)
  {
    std::cout <<i<<". " << mi[i] << std::endl;
  }
  return 0;
}