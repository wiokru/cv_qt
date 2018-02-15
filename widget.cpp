#include "widget.h"
#include "board.h"
#include "dane.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    this->setFixedSize(1110,700);
    mainLayout = new QGridLayout(this);

    info = new QPushButton("About me", this);
    edu = new QPushButton("Education", this);
    skills = new QPushButton("Skills", this);
    interests = new QPushButton("Interests", this);
    board = new Board(this);
    dane = new Dane(this);
    clause = new QLabel("I hereby give consent for my personal data included in my application to be processed "
                        "for the purposes of the recruitment process under the Personal Data Protection Act <br> "
                        "as of 29 August 1997, consolidated text: Journal of Laws 2016, item 922 as amended.", this);

    QFont csans("Comic Sans", 9, QFont::Light);
    clause->setFont(csans);

    mainLayout->addWidget(dane, 2,0,2,1, Qt::AlignCenter);
    mainLayout->addWidget(board, 1,1,3,4, Qt::AlignCenter);
    mainLayout->addWidget(info, 0,1,1,1);
    mainLayout->addWidget(edu, 0,2,1,1);
    mainLayout->addWidget(skills, 0,3,1,1);
    mainLayout->addWidget(interests, 0,4,1,1);
    mainLayout->addWidget(clause, 4,0,1,5);
    mainLayout->update();

    //connecty do przycisków i slotów z boarda

    connect(info, SIGNAL(clicked(bool)), board, SLOT(showInfo()));
    connect(edu, SIGNAL(clicked()), board, SLOT(showEdu()));
    connect(skills, SIGNAL(clicked()), board, SLOT(showSkills()));
    connect(interests, SIGNAL(clicked()), board, SLOT(showInterests()));

}

void Widget::paintEvent(QPaintEvent *) {

    QRectF target(10.0, 50.0, 236.0, 295.0);
    QRectF source(0.0, 0.0, 236.0, 295.0);
    QPixmap pixmap("files/photo.jpg");
    QPainter painter(this);
    painter.drawPixmap(target, pixmap, source);

}

Widget::~Widget()
{

}
