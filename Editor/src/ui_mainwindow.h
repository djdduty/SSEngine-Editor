/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionTest;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QDockWidget *dockWidget_6;
    QWidget *dockWidgetContents_7;
    QVBoxLayout *verticalLayout_6;
    QGraphicsView *graphicsView_2;
    QDockWidget *dockWidget_7;
    QWidget *dockWidgetContents_4;
    QVBoxLayout *verticalLayout_3;
    QListWidget *listWidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1280, 720);
        MainWindow->setBaseSize(QSize(0, 0));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon;
        icon.addFile(QStringLiteral("share/old_quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("share/old_open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("share/old_save_all.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QStringLiteral(":/icons/share/old_save_all.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSave->setIcon(icon2);
        actionTest = new QAction(MainWindow);
        actionTest->setObjectName(QStringLiteral("actionTest"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));

        horizontalLayout->addWidget(widget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1280, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setEnabled(true);
        mainToolBar->setMovable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        dockWidget_6 = new QDockWidget(MainWindow);
        dockWidget_6->setObjectName(QStringLiteral("dockWidget_6"));
        dockWidget_6->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidgetContents_7 = new QWidget();
        dockWidgetContents_7->setObjectName(QStringLiteral("dockWidgetContents_7"));
        verticalLayout_6 = new QVBoxLayout(dockWidgetContents_7);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        graphicsView_2 = new QGraphicsView(dockWidgetContents_7);
        graphicsView_2->setObjectName(QStringLiteral("graphicsView_2"));

        verticalLayout_6->addWidget(graphicsView_2);

        dockWidget_6->setWidget(dockWidgetContents_7);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget_6);
        dockWidget_7 = new QDockWidget(MainWindow);
        dockWidget_7->setObjectName(QStringLiteral("dockWidget_7"));
        dockWidget_7->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QStringLiteral("dockWidgetContents_4"));
        verticalLayout_3 = new QVBoxLayout(dockWidgetContents_4);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(dockWidgetContents_4);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout_3->addWidget(listWidget);

        dockWidget_7->setWidget(dockWidgetContents_4);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget_7);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionExit);
        menuFile->addAction(actionTest);
        mainToolBar->addAction(actionExit);
        mainToolBar->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Editor", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
#ifndef QT_NO_TOOLTIP
        actionExit->setToolTip(QApplication::translate("MainWindow", "Exit Application", 0));
#endif // QT_NO_TOOLTIP
        actionExit->setShortcut(QApplication::translate("MainWindow", "Esc", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0));
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0));
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        actionTest->setText(QApplication::translate("MainWindow", "Test", 0));
        actionTest->setShortcut(QApplication::translate("MainWindow", "Ctrl+T", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        dockWidget_6->setWindowTitle(QApplication::translate("MainWindow", "Test", 0));
        dockWidget_7->setWindowTitle(QApplication::translate("MainWindow", "Test 2", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
