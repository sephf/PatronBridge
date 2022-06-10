#ifndef CUADRADO_H
#define CUADRADO_H
#include "Figura.h"

class Cuadrado: public Figura{
    public:
        Cuadrado(Color*);
        virtual ~Cuadrado();
        string toString() const override;
};

#endif // CUADRADO_H
