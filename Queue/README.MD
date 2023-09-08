# FIFO
Hecho para recuperar conocimientos y practicar sobre las estructuras de datos.
## Instrucciones compilación
- `g++ ./src/IQueue.hpp ./src/QueueADT.cpp main.cpp -o test`
### Nueva variable en el nodo
La variable que añadi al nodo permite evitar una busqueda innecesaria por ejemplo para el ultimo elemento, a comparación con lo que hice en la Stack, esta busqueda es O(1), esta variable permite mayor flexibilidad a la hora de añadir/eliminar u obtener elementos, eso se aprecia en las funciones, como por ejemplo en at que es donde se le da un mayor uso.