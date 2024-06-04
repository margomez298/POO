#include "teclados.h"

Teclados::Teclados(QString &Marca, double Precio, int teclas)
{
    this->marca = Marca;
    this->precio = Precio;
    Cantidad_de_teclas= teclas;
}

void Teclados::afinar()
{
    qDebug() << "Afinando teclado";
}

void Teclados::Set_Cantidad_teclas(int teclas)
{
    Cantidad_de_teclas= teclas;
}

int Teclados::Get_cant_cuerdas()
{
    return Cantidad_de_teclas;
}
