#ifndef VENTANA_H
#define VENTANA_H

#include <QWidget>
#include <QLabel>

namespace Ui {
class Ventana;
}

class Ventana : public QWidget
{
    Q_OBJECT

public:
    explicit Ventana(const QString &usuario,QWidget *parent = nullptr);
    ~Ventana();

private:
    Ui::Ventana *ui;
    QLabel *label;
};

#endif // VENTANA_H
