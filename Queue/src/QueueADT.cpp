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
element_t QueueADT::last(){
  return this->__tail->e;
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
element_t QueueADT::pop(){
  Node *aux;
  aux = this->__tail;
  element_t value = aux->e;
  this->__tail = aux->next;
  delete aux;
  size_q--;
  return value;
}
bool QueueADT::some(element_t value){
  Node *aux;
  aux = this->__tail;
  for(int i = 0; i<this->size_q;i++){
    if(aux->e == value){
      return true;
    }
    aux = aux->next;
  }
  return false;
}
int QueueADT::find(element_t value){
  Node *aux;
  aux = this->__tail;
  for(int i = 0; i<this->size_q;i++){
    if(aux->e == value){
      return i;
    }
    aux = aux->next;
  }
  return -1;

}
element_t* QueueADT::data(){
  Node *aux;
  aux = this->__tail;
  element_t *h = new element_t[this->size_q];
  for(int i = 0; i<this->size_q;i++){
    h[i] = aux->e;
    aux = aux->next;
  }
  return h;
}

void QueueADT::replaceAll(element_t search_value,element_t replace_value){
  Node *aux;
  aux = this->__tail;
  for(int i = 0;i<this->size_q;i++){
    if(aux->e == search_value){
      aux->e = replace_value;
    }
    aux = aux->next;
  }
}