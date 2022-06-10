#include "Verde.h"

Verde::~Verde(){

}
string Verde::toString() const{
    stringstream s;
    s << "Color: Verde" << endl;
    return s.str();
}
