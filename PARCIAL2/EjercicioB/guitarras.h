#ifndef GUITARRAS_H
#define GUITARRAS_H
#include <QString>

#include "instrumento.h"

class guitarras : public Instrumento {
public:
    guitarras(QString Marca, float Precio);
    QString Get_Marca();
    float Get_Precio();
    int Get_cantidad_curdas();

    void Set_Marca(QString Marca);
    void Set_precio(float Precio);
    void Set_cant_cuerdas(int cuerdas);
    void Afinar();
private:
    QString marca;
    float precio=0;
    int cantidad_de_cuerdas;
};

#endif // GUITARRAS_H
