// main.cpp
#include <qt/QtWidgets/QApplication>
#include <qt/QtWidgets/QtWidgets>
#include <qt/QtWidgets/qapplication.h>
#include "ui_hello.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget *hw = new QWidget();// main gui window
    Ui::Form createUi;      // createUi is not a real window
    createUi.setupUi(hw);   // createUi is a tool for creating the GUI
    hw->show();             // hw is the real window

    return a.exec();
}
