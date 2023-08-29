#include <iostream>
#include <string>
#include "./src/StackADT.hpp"
void menu(StackADT *miPila);
int main()
{
  StackADT *miPila = new StackADT();
  menu(miPila);
  delete miPila;
  return 0;
}

void menu(StackADT *miPila)
{
  bool state = true;
  unsigned int option = 0;
  char enie = 164, otil = 162;
  element_t element,*mi;
  while (state)
  {
    std::cout << "============================= Menu ============================="<<std::endl;
    std::cout << "1. Agregar elemento." << std::endl;
    std::cout << "2. Eliminar elemento de la pila." << std::endl;
    std::cout << "3. Mostrar todos los elementos." << std::endl;
    std::cout << "4. Conocer tama" << enie << "o" << std::endl;
    std::cout << "5. Buscar elemento y obtener posici"<<otil<<"n." << std::endl;
    std::cout << "6. Salir" << std::endl;
    // std::cout<<""<<std::endl;
    std::cout << "Ingresa la opci"<<otil<<"n: ";
    std::cin >> option;
    switch (option)
    {
    case 1:
      std::cout << "Introduce el elemento: ";
      std::cin >> element;
      miPila->push(element);
      break;
    case 2:
      std::cout << "El elemento eliminado fue " << miPila->pop() << std::endl;
      break;
    case 3:
      mi = miPila->data();
      for (int i = 0; i < miPila->size(); i++)
      {
        std::cout <<i<<". " << mi[i] << std::endl;
      }
      break;
    case 4:
      std::cout << "El tama" << enie << "o de la pila es: " << miPila->size() << std::endl;
      break;
    case 5:
      std::cout << "Introduce el elemento que quieres encontrar: ";
      std::cin >> element;
      std::cout<<"Esta en la posici"<<otil<<"n : "<<miPila->find(element)<<std::endl;
      break;
    default:
      state = false;
      break;
    }
  }
}