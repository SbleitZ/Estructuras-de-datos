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
    value->prev = nullptr;
  }else{
    aux->next = value;
    value->prev = this->__top;
  }
  this->__top = value;
  value->next = nullptr;
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

element_t QueueADT::at(int index){
  if(index == 0){
    return this->__tail->e;
  }else if(index == -1){
    return this->__top->e;
  }

  element_t undefined_value;
  Node *aux;
  int unsigned_index = index > 0 ? index:-1*index;
  if(unsigned_index > size_q){
    return undefined_value;
  }
  aux = index > 0 ? this->__tail:this->__top;

  for(int i = index < 0 ? 1:0; i<this->size_q;i++){
    
    if(unsigned_index == i){
      return aux->e;
    }
    aux = index > 0 ? aux->next:aux->prev;
  }
  return undefined_value;
}