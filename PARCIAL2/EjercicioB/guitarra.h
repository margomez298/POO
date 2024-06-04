#ifndef GUITARRA_H
#define GUITARRA_H

#include "instrumento.h"
#include <QDebug>
#include <QString>


class Guitarra : public Instrumento
{
public:
    Guitarra(QString &Marca, double Precio, int cuerdas);
    void Set_Cant_cuerdas(int cuerdas);
    void afinar() override;
    int Get_cant_cuerdas();

private:
    int cantidad_de_cuerdas;

};

#endif // GUITARRA_H
