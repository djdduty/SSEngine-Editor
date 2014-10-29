#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "TestWindow.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0, TestWindow *window = 0);
    ~MainWindow();

private slots:
    void on_actionExit_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionTest_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
