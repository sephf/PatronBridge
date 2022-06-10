#include "Triangulo.h"

Triangulo::Triangulo(Color* ptrColor): Figura(ptrColor){

}

Triangulo::~Triangulo(){

}
string Triangulo::toString() const{
    stringstream s;
    s << "Figura: Triangulo" << endl;
    s << ptrColor->toString() << endl;
    return s.str();
}
