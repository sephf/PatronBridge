#ifndef VERDE_H
#define VERDE_H
#include "Color.h"

class Verde : public Color{
    public:
        virtual ~Verde();
        string toString() const override;
};

#endif // VERDE_H
