#include "stdafx.h"
#include <QApplication>
#include <QtPlugin>
#include "mainwindow.h"
Q_IMPORT_PLUGIN(QWindowsIntegrationPlugin)
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainWindow *mainWindow = new MainWindow;
	mainWindow->show();
	return a.exec();
}
 