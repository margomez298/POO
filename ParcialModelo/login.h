#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QMessageBox>

#include "editor.h"

class Login : public QDialog {
    Q_OBJECT
public:
    Login(QWidget *parent = nullptr);

private:
    Editor * editor;

signals:
    void loginSuccessful();

private slots:
    void attemptLogin();

private:
    QLineEdit *usernameLineEdit;
    QLineEdit *passwordLineEdit;
};

#endif // LOGIN_H
