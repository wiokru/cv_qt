#include "dane.h"

Dane::Dane(QWidget *parent) : QWidget(parent)
{   
    daneLayout = new QGridLayout(this);
    name = new QLabel("Wioleta Krukowska", this);
    addr = new QLabel("<u>Adress:</u> <br>************ <br> **************", this);
    birthday = new QLabel("<u>Date of birth:</u> <br>01.10.1996", this);
    phone = new QLabel("<u>Tel:</u> <br>*** *** ***", this);
    email = new QLabel("<u>email:</u> <br>*****************@*********", this);

    QFont georgia("Georgia", 13, QFont::Bold);
    QFont helv("Helvetica", 10.5, QFont::Light);

    name->setFont(georgia);
    addr->setFont(helv);
    birthday->setFont(helv);
    phone->setFont(helv);
    email->setFont(helv);

    daneLayout->addWidget(name);
    daneLayout->addWidget(addr);
    daneLayout->addWidget(birthday);
    daneLayout->addWidget(phone);
    daneLayout->addWidget(email);

}
