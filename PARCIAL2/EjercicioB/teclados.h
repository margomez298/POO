#ifndef TECLADOS_H
#define TECLADOS_H

#include <QString>

#include "instrumento.h"

class teclados : public Instrumento
{
public:
    teclados();
    QString Get_Marca();
    float Get_Precio();
    int Get_cantidad_Teclas();

    void Set_Marca(QString Marca);
    void Set_precio(float Precio);
    void Set_cant_teclas(int teclas);
    void Afinar();
private:
    QString marca;
    float precio=0;
    int cantidad_de_teclas;
};

#endif // TECLADOS_H
