#include "editor.h"
#include <QVBoxLayout>
#include <QMessageBox>
#include <QFileDialog>
#include <QTextStream>

Editor::Editor(QWidget *parent) : QWidget(parent) {
    QVBoxLayout *layout = new QVBoxLayout(this);

    textEdit = new QTextEdit(this);
    layout->addWidget(textEdit);

    searchLineEdit = new QLineEdit(this);
    layout->addWidget(searchLineEdit);

    searchButton = new QPushButton("Buscar", this);
    layout->addWidget(searchButton);
    connect(searchButton, &QPushButton::clicked, this, &Editor::buscar);

    searchResultLabel = new QLabel(this);
    layout->addWidget(searchResultLabel);

    saveLineEdit = new QLineEdit(this);
    layout->addWidget(saveLineEdit);

    saveButton = new QPushButton("Guardar", this);
    layout->addWidget(saveButton);
    connect(saveButton, &QPushButton::clicked, this, &Editor::guardar);

    setLayout(layout);
}

void Editor::buscar() {
    QString searchString = searchLineEdit->text();
    QString text = textEdit->toPlainText();
    int count = text.count(searchString);
    searchResultLabel->setText(QString::number(count) + " ocurrencias.");
}

void Editor::guardar() {
    QString fileName = saveLineEdit->text();
    if (!fileName.endsWith(".txt")) {
                        fileName += ".txt"; // Agregar la extensión .txt si no está presente
                    }
    QString text = textEdit->toPlainText();
    if (!fileName.isEmpty()) {
        QFile file(fileName);
        if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QTextStream out(&file);
            out << text;
            file.close();
            QMessageBox::information(this, "Guardado", "El archivo se ha guardado correctamente.");
        } else {
            QMessageBox::warning(this, "Error", "No se pudo guardar el archivo.");
        }
    } else {
        QMessageBox::warning(this, "Error", "Por favor, ingrese un nombre de archivo válido.");
    }
}
