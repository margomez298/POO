#ifndef VIENTO_H
#define VIENTO_H

#include "instrumento.h"

#include <QDebug>
#include <QString>


class Viento :public Instrumento
{
public:
    Viento(QString &Marca, double Precio,QString Metal);
    void afinar() override;
    void Set_Metal_usado(QString metal);
    QString Get_metal_usado();

private:
    QString Metal_usado;
};

#endif // VIENTO_H
