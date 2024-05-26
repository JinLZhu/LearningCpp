#include <qt/QtWidgets/QApplication>
#include <qt/QtWidgets/qapplication.h>
#include "hellowidget.h"

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    HelloWidget hw;
    hw.show();

    return a.exec();
}
