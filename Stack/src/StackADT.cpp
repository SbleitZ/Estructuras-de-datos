#include "StackADT.hpp"
#include <iostream>
#include <cstdlib>
StackADT::StackADT()
{
  __top = nullptr;
  __tail = nullptr;
  size_s = 0;
}
StackADT::~StackADT()
{
  __top = nullptr;
  __tail = nullptr;
  size_s = 0;
  // hacer una for borrando todo
}
void StackADT::push(element_t element)
{
  Node *aux;
  Node *node = (Node *)malloc(sizeof(Node));
  node->e = element;
  if (this->size_s == 0)
  {
    this->__top = node;
    this->__tail = node;
    node->next = nullptr;
  }
  else
  {
    aux = this->__top;
    aux->next = node;
    this->__top = node;
    node->next = nullptr;
  }
  size_s++;
}
int StackADT::size()
{
  return this->size_s;
}
bool StackADT::empty()
{
  return this->size_s == 0;
}
// Devuelve el elemento
element_t StackADT::top()
{
  return this->__top->e;
}
element_t StackADT::pop()
{
  Node *aux, *aux_back;
  element_t deleted_value;
  aux = this->__top;
  if (this->size_s == 1)
  {
    free(this->__top);
    free(this->__tail);
  }
  else
  {
    aux = this->__tail;
    for (int i = 0; i < this->size_s; i++)
    {
      if (i == this->size_s - 1)
      {
        this->__top = aux_back;
        deleted_value = aux->e;
        free(aux);
      }
      if (i == this->size_s - 2)
      {
        aux_back = aux;
      }
      aux = aux->next;
    }
  }
  size_s--;
  return deleted_value;
}

element_t* StackADT::data(){
  Node *aux;
  aux = this->__tail;
  element_t *h = new element_t[this->size_s];
  for(int i = 0; i<this->size_s;i++){
    h[i] = aux->e;
    aux = aux->next;
  }
  return h;
}