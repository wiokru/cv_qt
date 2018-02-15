#ifndef DANE_H
#define DANE_H

#include <QtWidgets>
#include <QLabel>

class Dane : public QWidget
{
    Q_OBJECT

    QGridLayout *daneLayout;

public:
    QLabel *name;
    QLabel *addr;
    QLabel *birthday;
    QLabel *phone;
    QLabel *email;

    explicit Dane(QWidget *parent = 0);

signals:

public slots:
};

#endif // DANE_H
