#include <QApplication>
#include "MainWindow.h"
#include "IGradeConverter.h"
#include "US4ScaleConverter.h"

IGradeConverter* g_converter = new US4ScaleConverter();

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    MainWindow* w = new MainWindow();
    w->show();
    return app.exec();
}