#include <QApplication>
#include <QLabel>
#include <QPixmap>
#include <QTimer>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QLabel label;

    QPixmap imagen("C:/Users/checa/Desktop/BLSP/Tercer Año/POO/Ejercicio12/b02.jpg");

    label.setPixmap(imagen);

    label.setFixedSize(imagen.size());

    label.showMaximized();

    QTimer::singleShot(3000, &app, SLOT(quit()));

    return app.exec();
}
