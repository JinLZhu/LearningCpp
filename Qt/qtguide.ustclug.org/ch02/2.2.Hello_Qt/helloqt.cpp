#include <qt/QtWidgets/QApplication>
#include <qt/QtWidgets/QLabel>
#include <qt/QtWidgets/qapplication.h>
#include <qt/QtWidgets/qlabel.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QLabel lable(QLabel::tr("Hello Qt!"));
    lable.show();

    return a.exec();
}

