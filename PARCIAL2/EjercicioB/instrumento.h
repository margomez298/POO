#ifndef INSTRUMENTO_H
#define INSTRUMENTO_H
#include <QString>



class Instrumento
{
public:
    Instrumento(QString Marca, float Precio);


    virtual void Afinar();
private:
    QString marca;
    float precio;


};

#endif // INSTRUMENTO_H
