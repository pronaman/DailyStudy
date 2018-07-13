/********************************************************************************
** Form generated from reading UI file 'BookQt5Cookbook.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKQT5COOKBOOK_H
#define UI_BOOKQT5COOKBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BookQt5CookbookClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BookQt5CookbookClass)
    {
        if (BookQt5CookbookClass->objectName().isEmpty())
            BookQt5CookbookClass->setObjectName(QStringLiteral("BookQt5CookbookClass"));
        BookQt5CookbookClass->resize(600, 400);
        menuBar = new QMenuBar(BookQt5CookbookClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        BookQt5CookbookClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(BookQt5CookbookClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        BookQt5CookbookClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(BookQt5CookbookClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        BookQt5CookbookClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(BookQt5CookbookClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        BookQt5CookbookClass->setStatusBar(statusBar);

        retranslateUi(BookQt5CookbookClass);

        QMetaObject::connectSlotsByName(BookQt5CookbookClass);
    } // setupUi

    void retranslateUi(QMainWindow *BookQt5CookbookClass)
    {
        BookQt5CookbookClass->setWindowTitle(QApplication::translate("BookQt5CookbookClass", "BookQt5Cookbook", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BookQt5CookbookClass: public Ui_BookQt5CookbookClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKQT5COOKBOOK_H
