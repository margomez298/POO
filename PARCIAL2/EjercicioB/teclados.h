#ifndef TECLADOS_H
#define TECLADOS_H

#include "instrumento.h"

#include <QDebug>
#include <QString>

class Teclados : public Instrumento
{
public:
    Teclados(QString &Marca, double Precio, int teclas);
    void afinar() override;
    void Set_Cantidad_teclas(int teclas);
    int Get_cant_cuerdas();

private:
    int Cantidad_de_teclas;
};

#endif // TECLADOS_H
