#ifndef COLOR_H
#define COLOR_H
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Color{
    public:
        virtual string toString() const = 0;

};

#endif // COLOR_H
