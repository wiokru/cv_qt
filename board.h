#ifndef BOARD_H
#define BOARD_H

#include <QtWidgets>

class Board : public QWidget
{
    Q_OBJECT

    QGridLayout *boardLayout;
    QListWidget *resultBox;

    void paintEvent(QPaintEvent *);

public:
    explicit Board(QWidget *parent = 0);

signals:

public slots:
    void showInfo();
    void showEdu();
    void showSkills();
    void showInterests();
};

#endif // BOARD_H
