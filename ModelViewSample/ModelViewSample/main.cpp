#include "modelviewsample.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ModelViewSample w;
	w.show();
	return a.exec();
}
