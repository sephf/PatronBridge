#include <iostream>
#include "Triangulo.h"
#include "Cuadrado.h"
#include "Verde.h"
#include "Amarillo.h"

int main(){

    Color* ptrVerde = new Verde;
    Color* ptrAmarillo = new Amarillo;
    Figura* ptrTriangulo = new Triangulo(ptrVerde);
    Figura* ptrCuadrado = new Cuadrado(ptrAmarillo);

    cout << ptrTriangulo->toString() << endl;
    cout << ptrCuadrado->toString() << endl;

    delete ptrVerde;
    delete ptrAmarillo;
    delete ptrTriangulo;
    delete ptrCuadrado;

    return 0;
}
