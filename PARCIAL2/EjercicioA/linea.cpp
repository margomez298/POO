#include "linea.h"

Linea::Linea(int xi, int yi, int xf, int yf)
    : x_inicial(xi), y_inicial(yi), x_final(xf), y_final(yf) {}

int Linea::getX_inicial() const
{

    return x_inicial;
}

int Linea::getY_inicial() const
{
    return y_inicial;
}

int Linea::getX_final() const
{
    return x_final;
}

int Linea::getY_final() const
{
    return y_final;
}

void Linea::setX_final(const int x)
{
    x_final=x;
}

void Linea::setY_final(const int y)
{
    y_final=y;
}




