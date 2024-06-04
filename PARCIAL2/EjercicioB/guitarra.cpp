#include "guitarra.h"

Guitarra::Guitarra(QString &Marca, double Precio, int cuerdas)
{
     this->marca = Marca;
     this->precio = Precio;
     cantidad_de_cuerdas = cuerdas;
}

void Guitarra::Set_Cant_cuerdas(int cuerdas)
{
    cantidad_de_cuerdas = cuerdas;
}

void Guitarra::afinar()
{
    qDebug() << "Afinando guitarra";
}

int Guitarra::Get_cant_cuerdas()
{
    return  cantidad_de_cuerdas;
}
