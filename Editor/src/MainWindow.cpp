#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <iostream>

MainWindow::MainWindow(QWidget *parent, TestWindow* window) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QWidget* container = QWidget::createWindowContainer(window);
    container->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    QHBoxLayout *layout = new QHBoxLayout(ui->widget);
    layout->addWidget(container);
    layout->setMargin(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionExit_triggered()
{
    QMessageBox msgBox;
    msgBox.setText("Are you sure you wish to exit the program.");
    msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Cancel);
    int ret = msgBox.exec();

    if(ret == QMessageBox::Ok) qApp->quit();
}

void MainWindow::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), QString(), tr("Text Files (*.txt);;C++ Files (*.cpp *.h)"));
    if(!fileName.isEmpty()) {

    }
}

void MainWindow::on_actionSave_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"), QString(), tr("Text Files (*.txt);;C++ Files (*.cpp *.h)"));

    if (!fileName.isEmpty()) {

    }
}
void MainWindow::on_actionTest_triggered()
{
    std::cout << "Testy test\n";
}
