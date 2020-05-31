#include <QCoreApplication>
#include <QRandomGenerator64>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::uniform_int_distribution<int> distribution(0, 100);

    double value = distribution(*QRandomGenerator2::global());
    qDebug() <<value;
    while (value !=0) {
        value = distribution(*QRandomGenerator2::global());
        qDebug() <<value;
    }

    return a.exec();
}
