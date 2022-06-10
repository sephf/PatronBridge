#include "Figura.h"

Figura::Figura(Color* ptrColor){
    this->ptrColor = ptrColor;
}
Figura::~Figura(){

}
string Figura::toString()const
{
    stringstream s;
    s << "Figura: Abstracta" << endl;
    s << ptrColor->toString() << endl;
    return s.str();
}
