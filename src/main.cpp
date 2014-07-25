#include <QApplication>
#include <QPixmap>
#include <QSplashScreen>
#include "mainwindowimpl.h"
//
int main(int argc, char ** argv)
{
	QApplication app( argc, argv );
	QPixmap pixmap(":/splash.png");
	
	QSplashScreen splash(pixmap, Qt::WindowStaysOnTopHint);
	splash.show();
	app.processEvents();
	splash.showMessage("Loading...");

	MainWindowImpl *win=new MainWindowImpl;
	splash.showMessage("Ready");
	win->show();
	splash.finish(win);
	app.connect( &app, SIGNAL( lastWindowClosed() ), &app, SLOT( quit() ) );
	return app.exec();
}
