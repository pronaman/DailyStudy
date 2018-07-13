#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_BookQt5Cookbook.h"

class BookQt5Cookbook : public QMainWindow
{
	Q_OBJECT

public:
	BookQt5Cookbook(QWidget *parent = Q_NULLPTR);

private:
	Ui::BookQt5CookbookClass ui;
};
