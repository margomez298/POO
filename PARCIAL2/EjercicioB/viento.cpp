#include "viento.h"


Viento::Viento(QString &Marca, double Precio, QString Metal)
{
   this->marca = Marca;
   this->precio = Precio;
   Metal_usado = Metal;
}

void Viento::afinar()
{
    qDebug() <<"Afinando viento";
}

void Viento::Set_Metal_usado(QString metal)
{
    Metal_usado= metal;
}

QString Viento::Get_metal_usado()
{
    return Metal_usado;
}

