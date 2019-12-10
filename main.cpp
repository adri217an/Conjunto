
// ---------------------------------------------------
 // main.cpp
// g++ Conjunto.cpp main.cpp
// ---------------------------------------------------
#include <iostream>
#include "Conjunto.h"
// ---------------------------------------------------
// --------------------------------------------------
void probarTalla() {
Conjunto c1;
unsigned int a = c1.talla(); if ( a != 0 ) {
     std::cout << " mmm, parece que no va bien talla()\n";
     return; // pues termino
  }
      // tal vez escribir más casos ...

  std::cout << " parece que talla() va bien \n";
} // ()
      // ---------------------------------------------------
      // ---------------------------------------------------
      void probarOtraCosa() {
      std::cout << " parece que esta prueba funciona ... ";
      std::cout << " pero es porque no he probado nada aún :-) \n"; }
      // ()
      // ---------------------------------------------------
       // ---------------------------------------------------
        int main() {
        probarTalla();
        probarOtraCosa();
      } // ()
