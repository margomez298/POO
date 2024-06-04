
#ifndef ADMINDB_H
#define ADMINDB_H


#include <QObject>
#include <QSqlDatabase>
#include <QString>
#include <QVector>
#include <QPair>



class AdminDB : public QObject
{
    Q_OBJECT
public:
    explicit AdminDB(QObject *parent = nullptr);
    static AdminDB* getInstance();


    bool conectar( QString archivoSqlite );
    QSqlDatabase getDB();

     QStringList validarUsuario( QString usuario, QString clave );
     QVector<QStringList> select(QString comando);

private:
    QSqlDatabase db;
    static AdminDB *instance;


};

#endif // ADMINDB_H
