#ifndef CUSTOMMAINWINDOW_H
#define CUSTOMMAINWINDOW_H


#include "mainwindow.h"

class CustomMainWindow : public MainWindow {
    Q_OBJECT
public:
    CustomMainWindow(QWidget *parent = nullptr);

public slots:
    void login() override;
};
#endif // CUSTOMMAINWINDOW_H
