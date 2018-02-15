#ifndef WIDGET_H
#define WIDGET_H

#include <QtWidgets>
#include <QRect>


class Board;
class Dane;

class Widget : public QWidget
{
    Q_OBJECT

    QGridLayout *mainLayout;
    QPushButton *info, *edu, *skills, *interests;
    Board *board;
    Dane *dane;
    QLabel *clause;

    void paintEvent(QPaintEvent *);

private slots:


public:
    Widget(QWidget *parent = 0);
    ~Widget();
};

#endif // WIDGET_H
