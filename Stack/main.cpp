#include <iostream>
#include "./src/StackADT.hpp"

int main(){
  StackADT *miPila = new StackADT();
  miPila->push(10);
  miPila->push(15);
  miPila->push(30);
  miPila->push(40);
  miPila->push(60);
  std::cout << "El tamano es: " << miPila->size()<<std::endl;
  // element_t *mi =  miPila->data();
  // delete[] mi;
  element_t resultado = miPila->pop();
  std::cout<<"que pasa ladys 2\n";
  std::cout<<"Resultado"<<resultado<<std::endl;
   std::cout<<"Tiene informacion "<<miPila->size();
  resultado = miPila->pop();
  std::cout<<"que pasa ladys 2\n";
  std::cout<<"Resultado"<<resultado<<std::endl;
   std::cout<<"Tiene informacion "<<miPila->size();
  delete miPila;

  return 0;
}