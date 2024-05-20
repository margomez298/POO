#include "login.h"

#include "QVBoxLayout"


Login::Login(QWidget *parent) : QDialog(parent) {
    QVBoxLayout *layout = new QVBoxLayout(this);

    QLabel *usernameLabel = new QLabel("Usuario:", this);
    layout->addWidget(usernameLabel);
    usernameLineEdit = new QLineEdit(this);
    layout->addWidget(usernameLineEdit);

    QLabel *passwordLabel = new QLabel("Contraseña:", this);
    layout->addWidget(passwordLabel);
    passwordLineEdit = new QLineEdit(this);
    passwordLineEdit->setEchoMode(QLineEdit::Password);
    layout->addWidget(passwordLineEdit);

    QPushButton *loginButton = new QPushButton("Iniciar sesión", this);
    layout->addWidget(loginButton);
    connect(loginButton, &QPushButton::clicked, this, &Login::attemptLogin);

    editor = new Editor;

    setLayout(layout);
}

void Login::attemptLogin() {
    QString username = usernameLineEdit->text();
    QString password = passwordLineEdit->text();

    if (username == "admin" && password == "123") {
        loginSuccessful();
        this->close();
        editor->show();

    } else {
        QMessageBox::critical(this, "Error", "Usuario o contraseña incorrectos.");
    }
}
