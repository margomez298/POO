#include "teclados.h"

#include <QDebug>

teclados::teclados()
{

}

QString teclados::Get_Marca()
{
    return marca;
}

float teclados::Get_Precio()
{
    return precio;
}

int teclados::Get_cantidad_Teclas()
{
    return cantidad_de_teclas;
}

void teclados::Set_Marca(QString Marca)
{
    marca= Marca;
}

void teclados::Set_precio(float Precio)
{
    precio= Precio;
}

void teclados::Set_cant_teclas(int teclas)
{
    cantidad_de_teclas=teclas;
}

void teclados::Afinar()
{
    qDebug()<<"Afinando Teclado";
}



