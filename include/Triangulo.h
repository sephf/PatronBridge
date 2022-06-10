#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "Figura.h"

class Triangulo : public Figura{
    public:
        Triangulo(Color*);
        virtual ~Triangulo();
        string toString() const override;
};

#endif // TRIANGULO_H
