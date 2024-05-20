#ifndef EDITOR_H
#define EDITOR_H

#include <QWidget>
#include <QVBoxLayout>
#include <QTextEdit>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QFileDialog>
#include <QMessageBox>

class Editor : public QWidget {
    Q_OBJECT
public:
    Editor(QWidget *parent = nullptr);

private slots:
    void buscar();
    void guardar();

private:
    QTextEdit *textEdit;
    QLineEdit *searchLineEdit;
    QPushButton *searchButton;
    QLabel *searchResultLabel;
    QLineEdit *saveLineEdit;
    QPushButton *saveButton;
};

#endif // EDITOR_H
