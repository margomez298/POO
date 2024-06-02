#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QtWidgets>
#include <QNetworkAccessManager>
#include <QNetworkReply>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

public slots:
    virtual void login()=0;

protected:
    QLineEdit *userLineEdit;
    QLineEdit *passwordLineEdit;


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

