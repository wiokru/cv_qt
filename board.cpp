#include "board.h"
#include <QFile>

Board::Board(QWidget *parent) : QWidget(parent)
{
    this->setFixedSize(800, 600);

    boardLayout = new QGridLayout(this);
    resultBox = new QListWidget(this);

    QFont font("Georgia", 12, QFont::Normal);
    resultBox->setFont(font);

    resultBox->setSelectionMode(QAbstractItemView::NoSelection);

    boardLayout->addWidget(resultBox, 0,0,1,1);
}

void Board::paintEvent(QPaintEvent *) {
    QPainter painter(this);

    painter.fillRect(0,0,this->width(),
                     this->height(),QColor(0xFFFFFF));
}

void Board::showInfo(){

    resultBox->clear();

    QListWidgetItem *line;

    QFile file(":/files/info.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QTextStream in(&file);
    while (!in.atEnd()) {
        line = new QListWidgetItem;
        line->setText(in.readLine());
        resultBox->addItem(line);
    }
}

void Board::showEdu(){

    resultBox->clear();

    QListWidgetItem *line;

    QFile file(":/files/edu.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QTextStream in(&file);
    while (!in.atEnd()) {
        line = new QListWidgetItem;
        line->setText(in.readLine());
        resultBox->addItem(line);
    }
}

void Board::showSkills(){

    resultBox->clear();

    QListWidgetItem *line;

    QFile file(":/files/skills.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QTextStream in(&file);
    while (!in.atEnd()) {
        line = new QListWidgetItem;
        line->setText(in.readLine());
        resultBox->addItem(line);
    }
}

void Board::showInterests(){

    resultBox->clear();

    QListWidgetItem *line;

    QFile file(":/files/interests.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QTextStream in(&file);
    while (!in.atEnd()) {
        line = new QListWidgetItem;
        line->setText(in.readLine());
        resultBox->addItem(line);
    }
}
