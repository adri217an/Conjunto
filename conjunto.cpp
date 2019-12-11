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

// ---------------------------------------------------
// ---------------------------------------------------

void Conjunto::anyadir (double a){

  (*this).elementos[(*this).talla()] = a;
  //(*this).elementos[(*this).tam] = a;
}

// ---------------------------------------------------
// ---------------------------------------------------

bool Conjunto::contiene (double b){
  for (int i = 0; i < (*this).tam; i++) {
    if ((*this).elementos[i] == b) {
      return true;
    }else{
      return false;
    }
  }
}

// ---------------------------------------------------
// ---------------------------------------------------

void Conjunto::vaciar(){
  (*this).tam = 0;
}

// ---------------------------------------------------
// ---------------------------------------------------

void Conjunto::eliminar (double c){
  for (int i = 0; i < (*this).tam; i++) {
    if ((*this).elementos[i] == c) {
      (*this).elementos[i] ;
    }
  }
}
