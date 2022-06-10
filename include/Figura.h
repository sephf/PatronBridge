#ifndef FIGURA_H
#define FIGURA_H
#include "Color.h"

class Figura{

    protected:
        Color* ptrColor;

    public:
        Figura(Color*);
        virtual ~Figura();
        virtual string toString() const;

};

#endif // FIGURA_H
