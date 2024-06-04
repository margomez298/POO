#ifndef INSTRUMENTO_H
#define INSTRUMENTO_H

#include <QString>

class Instrumento
{
public:
    virtual ~Instrumento() = default;
    virtual void afinar()=0;


protected:
    QString marca;
    double precio;

};

#endif // INSTRUMENTO_H
