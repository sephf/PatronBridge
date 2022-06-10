#ifndef AMARILLO_H
#define AMARILLO_H
#include "Color.h"

class Amarillo : public Color{
    public:
        virtual ~Amarillo();
        string toString() const override;
};

#endif // AMARILLO_H
