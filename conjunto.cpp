// ---------------------------------------------------
 // Conjunto.cpp
// g++ -c Conjunto.cpp
// ---------------------------------------------------
 #include "conjunto.h"
 using namespace std;
// ---------------------------------------------------
// ---------------------------------------------------

Conjunto::Conjunto(double *p, int tam2){

  for (int i = 0; i<tam2; i++){
    (*this).elementos[i] = p[i];
  }
  (*this).tam = tam2;
}

// ---------------------------------------------------
// ---------------------------------------------------

int Conjunto::talla(){
return (*this).tam;
}
