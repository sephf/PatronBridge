#include "Amarillo.h"

Amarillo::~Amarillo(){

}
string Amarillo::toString() const{
    stringstream s;
    s << "Color: Amarillo" << endl;
    return s.str();
}
