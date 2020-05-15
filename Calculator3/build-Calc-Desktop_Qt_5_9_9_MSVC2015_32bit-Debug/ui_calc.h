/********************************************************************************
** Form generated from reading UI file 'calc.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALC_H
#define UI_CALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calc
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *Button4;
    QPushButton *Button0;
    QPushButton *Subtract;
    QPushButton *Button5;
    QPushButton *Button2;
    QPushButton *MemAdd;
    QPushButton *Button9;
    QPushButton *Add;
    QPushButton *Divide;
    QPushButton *Multiply;
    QPushButton *Button7;
    QPushButton *ChangeSign;
    QPushButton *Button1;
    QPushButton *MemGet;
    QPushButton *Button6;
    QPushButton *Clear;
    QPushButton *Button8;
    QPushButton *Button3;
    QPushButton *MemClear;
    QPushButton *Equals;
    QLineEdit *Display;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calc)
    {
        if (Calc->objectName().isEmpty())
            Calc->setObjectName(QStringLiteral("Calc"));
        Calc->resize(519, 248);
        centralwidget = new QWidget(Calc);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName(QStringLiteral("Button4"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy);
        Button4->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(Button4, 2, 0, 1, 1);

        Button0 = new QPushButton(centralwidget);
        Button0->setObjectName(QStringLiteral("Button0"));
        sizePolicy.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy);
        Button0->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(Button0, 4, 1, 1, 1);

        Subtract = new QPushButton(centralwidget);
        Subtract->setObjectName(QStringLiteral("Subtract"));
        sizePolicy.setHeightForWidth(Subtract->sizePolicy().hasHeightForWidth());
        Subtract->setSizePolicy(sizePolicy);
        Subtract->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#FFBC00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(Subtract, 4, 3, 1, 1);

        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName(QStringLiteral("Button5"));
        sizePolicy.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy);
        Button5->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(Button5, 2, 1, 1, 1);

        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName(QStringLiteral("Button2"));
        sizePolicy.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy);
        Button2->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(Button2, 3, 1, 1, 1);

        MemAdd = new QPushButton(centralwidget);
        MemAdd->setObjectName(QStringLiteral("MemAdd"));
        sizePolicy.setHeightForWidth(MemAdd->sizePolicy().hasHeightForWidth());
        MemAdd->setSizePolicy(sizePolicy);
        MemAdd->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#FFBC00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(MemAdd, 1, 4, 1, 1);

        Button9 = new QPushButton(centralwidget);
        Button9->setObjectName(QStringLiteral("Button9"));
        sizePolicy.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy);
        Button9->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(Button9, 1, 2, 1, 1);

        Add = new QPushButton(centralwidget);
        Add->setObjectName(QStringLiteral("Add"));
        sizePolicy.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy);
        Add->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#FFBC00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(Add, 3, 3, 1, 1);

        Divide = new QPushButton(centralwidget);
        Divide->setObjectName(QStringLiteral("Divide"));
        sizePolicy.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy);
        Divide->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#FFBC00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(Divide, 1, 3, 1, 1);

        Multiply = new QPushButton(centralwidget);
        Multiply->setObjectName(QStringLiteral("Multiply"));
        sizePolicy.setHeightForWidth(Multiply->sizePolicy().hasHeightForWidth());
        Multiply->setSizePolicy(sizePolicy);
        Multiply->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#FFBC00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(Multiply, 2, 3, 1, 1);

        Button7 = new QPushButton(centralwidget);
        Button7->setObjectName(QStringLiteral("Button7"));
        sizePolicy.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy);
        Button7->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(Button7, 1, 0, 1, 1);

        ChangeSign = new QPushButton(centralwidget);
        ChangeSign->setObjectName(QStringLiteral("ChangeSign"));
        sizePolicy.setHeightForWidth(ChangeSign->sizePolicy().hasHeightForWidth());
        ChangeSign->setSizePolicy(sizePolicy);
        ChangeSign->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(ChangeSign, 4, 2, 1, 1);

        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName(QStringLiteral("Button1"));
        sizePolicy.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy);
        Button1->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(Button1, 3, 0, 1, 1);

        MemGet = new QPushButton(centralwidget);
        MemGet->setObjectName(QStringLiteral("MemGet"));
        sizePolicy.setHeightForWidth(MemGet->sizePolicy().hasHeightForWidth());
        MemGet->setSizePolicy(sizePolicy);
        MemGet->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#FFBC00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(MemGet, 3, 4, 1, 1);

        Button6 = new QPushButton(centralwidget);
        Button6->setObjectName(QStringLiteral("Button6"));
        sizePolicy.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy);
        Button6->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(Button6, 2, 2, 1, 1);

        Clear = new QPushButton(centralwidget);
        Clear->setObjectName(QStringLiteral("Clear"));
        sizePolicy.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy);
        Clear->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(Clear, 4, 0, 1, 1);

        Button8 = new QPushButton(centralwidget);
        Button8->setObjectName(QStringLiteral("Button8"));
        sizePolicy.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy);
        Button8->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(Button8, 1, 1, 1, 1);

        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName(QStringLiteral("Button3"));
        sizePolicy.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy);
        Button3->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(Button3, 3, 2, 1, 1);

        MemClear = new QPushButton(centralwidget);
        MemClear->setObjectName(QStringLiteral("MemClear"));
        sizePolicy.setHeightForWidth(MemClear->sizePolicy().hasHeightForWidth());
        MemClear->setSizePolicy(sizePolicy);
        MemClear->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#FFBC00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(MemClear, 2, 4, 1, 1);

        Equals = new QPushButton(centralwidget);
        Equals->setObjectName(QStringLiteral("Equals"));
        sizePolicy.setHeightForWidth(Equals->sizePolicy().hasHeightForWidth());
        Equals->setSizePolicy(sizePolicy);
        Equals->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:#FFBC00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
""));

        gridLayout->addWidget(Equals, 4, 4, 1, 1);

        Display = new QLineEdit(centralwidget);
        Display->setObjectName(QStringLiteral("Display"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        Display->setFont(font);
        Display->setStyleSheet(QLatin1String("QLineEdit{\n"
"	background-color:gray;\n"
"	border: 1px solid gray;\n"
"	color:#ffffff;\n"
"}"));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 0, 0, 1, 5);

        Calc->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calc);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 519, 21));
        Calc->setMenuBar(menubar);
        statusbar = new QStatusBar(Calc);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Calc->setStatusBar(statusbar);

        retranslateUi(Calc);

        QMetaObject::connectSlotsByName(Calc);
    } // setupUi

    void retranslateUi(QMainWindow *Calc)
    {
        Calc->setWindowTitle(QApplication::translate("Calc", "Calc", Q_NULLPTR));
        Button4->setText(QApplication::translate("Calc", "4", Q_NULLPTR));
        Button0->setText(QApplication::translate("Calc", "0", Q_NULLPTR));
        Subtract->setText(QApplication::translate("Calc", "-", Q_NULLPTR));
        Button5->setText(QApplication::translate("Calc", "5", Q_NULLPTR));
        Button2->setText(QApplication::translate("Calc", "2", Q_NULLPTR));
        MemAdd->setText(QApplication::translate("Calc", "M+", Q_NULLPTR));
        Button9->setText(QApplication::translate("Calc", "9", Q_NULLPTR));
        Add->setText(QApplication::translate("Calc", "+", Q_NULLPTR));
        Divide->setText(QApplication::translate("Calc", "/", Q_NULLPTR));
        Multiply->setText(QApplication::translate("Calc", "*", Q_NULLPTR));
        Button7->setText(QApplication::translate("Calc", "7", Q_NULLPTR));
        ChangeSign->setText(QApplication::translate("Calc", "+/-", Q_NULLPTR));
        Button1->setText(QApplication::translate("Calc", "1", Q_NULLPTR));
        MemGet->setText(QApplication::translate("Calc", "M", Q_NULLPTR));
        Button6->setText(QApplication::translate("Calc", "6", Q_NULLPTR));
        Clear->setText(QApplication::translate("Calc", "AC", Q_NULLPTR));
        Button8->setText(QApplication::translate("Calc", "8", Q_NULLPTR));
        Button3->setText(QApplication::translate("Calc", "3", Q_NULLPTR));
        MemClear->setText(QApplication::translate("Calc", "M-", Q_NULLPTR));
        Equals->setText(QApplication::translate("Calc", "=", Q_NULLPTR));
        Display->setText(QApplication::translate("Calc", "0.0", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Calc: public Ui_Calc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALC_H
