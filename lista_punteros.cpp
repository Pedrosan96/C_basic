#include<iostream>

using namespace std;

class Nodo{
  public:
    Nodo* Sig;
    int dato;

    Nodo(int dato, sig = NULL){
      this->dato = dato;
      this->sig = sig;
    }
};

class Lista{
  public:
    Lista(){
      primer = NULL;
    }

    Nodo* ultimo();

    int insertar(int dato){
      Nodo* nuevo = new Nodo(dato);
      if(primero == NULL){
        primero = nuevo;
      }
      else{
        this->ultimo()->sig = nuevo;
      }
      return 1;
    }
    private:
      Nodo *primero;
}
