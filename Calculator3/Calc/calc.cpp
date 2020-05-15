#include "calc.h"
#include "ui_calc.h"

double calcVal = 0.0;

bool divTrigger = false;
bool multTrigger = false;
bool addTrigger = false;
bool subTrigger = false;

Calc::Calc(QWidget *parent) :

    QMainWindow(parent),

    ui(new Ui::Calc)
{

    ui->setupUi(this);

    // Wyświetlanie 0.0 w LineEdicie
    ui->Display->setText(QString::number(calcVal));
    QPushButton *numButtons[10];

    for(int i = 0; i < 10; ++i){
        QString butName = "Button" + QString::number(i);

        numButtons[i] = Calc::findChild<QPushButton *>(butName);

        connect(numButtons[i], SIGNAL(released()), this,
                SLOT(NumPressed()));
    }

    connect(ui->Add, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
    connect(ui->Subtract, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
    connect(ui->Multiply, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
    connect(ui->Divide, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));

    connect(ui->Equals, SIGNAL(released()), this,
            SLOT(EqualButtonPressed()));

    connect(ui->ChangeSign, SIGNAL(released()), this,
            SLOT(ChangeNumberSign()));


}

Calc::~Calc()
{
    delete ui;
}

void Calc::NumPressed(){

    QPushButton *button = (QPushButton *)sender();

    QString butVal = button->text();

    QString displayVal = ui->Display->text();

    if((displayVal.toDouble() == 0) || (displayVal.toDouble() == 0.0)){

        ui->Display->setText(butVal);

    } else {
        QString newVal = displayVal + butVal;

        double dblNewVal = newVal.toDouble();

        ui->Display->setText(QString::number(dblNewVal, 'g', 16));

    }
}

void Calc::MathButtonPressed(){

    divTrigger = false;
    multTrigger = false;
    addTrigger = false;
    subTrigger = false;

    QString displayVal = ui->Display->text();
    calcVal = displayVal.toDouble();

    QPushButton *button = (QPushButton *)sender();

    QString butVal = button->text();

    if(QString::compare(butVal, "/", Qt::CaseInsensitive) == 0){
        divTrigger = true;
    } else if(QString::compare(butVal, "*", Qt::CaseInsensitive) == 0){
        multTrigger = true;
    } else if(QString::compare(butVal, "+", Qt::CaseInsensitive) == 0){
        addTrigger = true;
    } else {
        subTrigger = true;
    }

    ui->Display->setText("");

}

void Calc::EqualButtonPressed(){

    double solution = 0.0;

    QString displayVal = ui->Display->text();
    double dblDisplayVal = displayVal.toDouble();

    if(addTrigger || subTrigger || multTrigger || divTrigger ){
        if(addTrigger){
            solution = calcVal + dblDisplayVal;
        } else if(subTrigger){
            solution = calcVal - dblDisplayVal;
        } else if(multTrigger){
            solution = calcVal * dblDisplayVal;
        } else {
            solution = calcVal / dblDisplayVal;
        }
    }

    ui->Display->setText(QString::number(solution));

}

void Calc::ChangeNumberSign(){

    QString displayVal = ui->Display->text();


    QRegExp reg("[-+]?[0-9.]*");

    if(reg.exactMatch(displayVal)){
        double dblDisplayVal = displayVal.toDouble();
        double dblDisplayValSign = -1 * dblDisplayVal;

        ui->Display->setText(QString::number(dblDisplayValSign));
    }

}
