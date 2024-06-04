#include "guitarras.h"

#include <QDebug>

guitarras::guitarras(QString Marca, float Precio)
{
   Instrumento(Marca,Precio);
}

QString guitarras::Get_Marca()
{
    return marca;
}

float guitarras::Get_Precio()
{
    return precio;
}

int guitarras::Get_cantidad_curdas()
{
    return cantidad_de_cuerdas;
}

void guitarras::Set_Marca(QString Marca)
{
    marca = Marca;
}

void guitarras::Set_precio(float Precio)
{
    precio = Precio;
}

void guitarras::Set_cant_cuerdas(int cuerdas)
{
    cantidad_de_cuerdas = cuerdas;
}

void guitarras::Afinar()
{
    qDebug()<< "Afinando guitarra";
}
