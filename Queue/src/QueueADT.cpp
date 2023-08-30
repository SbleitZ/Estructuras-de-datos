#include "QueueADT.hpp"


QueueADT::QueueADT(){
  this->size_q = 0;
}
QueueADT::~QueueADT(){

}
bool QueueADT::empty(){
  return this->size_q == 0;
}
int QueueADT::size(){
  return this->size_q;
}
element_t QueueADT::top(){
  return this->__top->e;
}
void QueueADT::push(element_t item){
  Node *aux, *value = new Node();
  value->e = item;
  aux = this->__top;
  if(this->size_q == 0){
    this->__tail = value;
    this->__top = value;
    value->next = nullptr;
    value->prev = nullptr;
  }else{
    aux->next = value;
    value->prev = this->__top;
    value->next = nullptr;
    this->__top = value;
  }
  size_q++;
}
element_t QueueADT::last(){
  return this->__tail->e;
}
element_t QueueADT::pop(){
  Node *aux;
  aux = this->__tail;
  element_t value = aux->e;
  this->__tail = aux->next;
  delete aux;
  size_q--;
  return value;
}