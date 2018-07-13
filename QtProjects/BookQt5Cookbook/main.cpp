#include "BookQt5Cookbook.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	BookQt5Cookbook w;
	w.show();
	return a.exec();
}
