#include "vientos.h"
#include <QDebug>

vientos::vientos()
{

}

QString vientos::Get_Marca()
{
    return marca;
}

float vientos::Get_Precio()
{
    return precio;
}

QString vientos::Get_metal_usado()
{
    return metal_usado;
}

void vientos::Set_Marca(QString Marca)
{
    marca = Marca;
}

void vientos::Set_precio(float Precio)
{
    precio = Precio;
}

void vientos::Set_metal_usado(QString Metal)
{
    metal_usado = Metal;
}

void vientos::Afinar()
{
    qDebug()<< "Afinando vientos";
}







