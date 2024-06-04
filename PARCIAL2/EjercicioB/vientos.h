#ifndef VIENTOS_H
#define VIENTOS_H

#include <QString>

#include "instrumento.h"

class vientos :public Instrumento
{
public:
    vientos();
    QString Get_Marca();
    float Get_Precio();
    QString Get_metal_usado();

    void Set_Marca(QString Marca);
    void Set_precio(float Precio);
    void Set_metal_usado(QString Metal);
    void Afinar();
private:
    QString marca;
    float precio=0;
    QString metal_usado;
};

#endif // VIENTOS_H
