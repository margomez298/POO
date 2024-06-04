#include "formulario.h"
#include "ui_formulario.h"


Formulario::Formulario(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Formulario)
{
    ui->setupUi(this);
     connect(ui->pbAgregar, &QPushButton::clicked, this, &Formulario::on_agregarInstrumentoButton_clicked);
     connect(ui->pbStock, &QPushButton::clicked, this, &Formulario::on_verStockButton_clicked);
     connect(ui->CBtipoInstrumento, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &Formulario::on_tipoInstrumentoComboBox_currentIndexChanged);
}



Formulario::~Formulario()
{
    delete ui;
    qDeleteAll(instrumentos);
}


void Formulario::on_agregarInstrumentoButton_clicked() {
    QString marca = ui->leMarca->text();
    double precio = ui->lePrecio->text().toDouble();
    int index = ui->CBtipoInstrumento->currentIndex();

    Instrumento *nuevoInstrumento = nullptr;

    if (index == 0) {
        int cuerdas = ui->leCant_cuerdas->text().toInt();
        nuevoInstrumento = new Guitarra(marca, precio, cuerdas);
    } else if (index == 1) {
        QString metal = ui->leMetal_usado->text();
        nuevoInstrumento = new Viento(marca, precio, metal);
    } else if (index == 2) {
        int tecla = ui->leCant_teclas->text().toInt();
        nuevoInstrumento = new Teclados(marca, precio, tecla);
    }

    if (nuevoInstrumento) {
        instrumentos.append(nuevoInstrumento);
        qDebug()<< "Instrumento agregado: ";
        nuevoInstrumento->Afinar();
    }
}

void Formulario::on_verStockButton_clicked() {
    for (const auto &instrumento : instrumentos) {
        instrumento->Afinar();
    }
}

void Formulario::on_tipoInstrumentoComboBox_currentIndexChanged(int index) {
    ui->leCant_cuerdas->setVisible(index == 0);
    ui->leMetal_usado->setVisible(index == 1);
    ui->leCant_teclas->setVisible(index == 2);
}



