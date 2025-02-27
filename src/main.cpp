#include <QApplication>
#include <QWidget>
#include <QNetworkAccessManager>
#include <QSqlDatabase>
#include <QGraphicsView>
#include <QtCharts/QChartView>

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    QWidget w;
    w.show();
    return a.exec();
}
