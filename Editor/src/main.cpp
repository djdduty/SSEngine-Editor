#include "MainWindow.h"
#include "TestWindow.h"

#include <QApplication>
#include <QSurfaceFormat>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSurfaceFormat format;
    format.setSamples(16);
    TestWindow window;
    window.setFormat(format);
    //window.resize(800,600);
    window.setAnimating(true);
    //window.show();

    MainWindow* w = new MainWindow(0, &window);
    w->show();

    return a.exec();
}
