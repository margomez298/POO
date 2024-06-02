// ventana.cpp
#include "ventana.h"
#include "ui_ventana.h"
#include <QVBoxLayout>
#include <QDebug>


Ventana::Ventana(const QString &usuario, QWidget *parent) : QWidget(parent)
{
    QVBoxLayout *layout = new QVBoxLayout(this);
    label = new QLabel(this);
    label->setAlignment(Qt::AlignCenter);

    qDebug()<<usuario;

    if (usuario == "Admin") {
        label->setText("Hola Admin");
    } else {
        label->setText("Hola User");
    }

    layout->addWidget(label);
}

Ventana::~Ventana()
{
    delete ui;
}
