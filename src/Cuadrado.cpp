#include "Cuadrado.h"

Cuadrado::Cuadrado(Color* ptrColor): Figura(ptrColor){

}
Cuadrado::~Cuadrado(){

}
string Cuadrado::toString() const{
    stringstream s;
    s << "Figura: Cuadrado" << endl;
    s << ptrColor->toString() << endl;
    return s.str();
}
