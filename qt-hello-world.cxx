/*
 * =====================================================================================
 *
 *       Filename:  qt-example.cxx
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  23/12/22 10:51:52 PM IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Kashyap Ekbote (Krash), kashyap.ekbote@gmail.com
 *        Company:  no
 *
 * =====================================================================================
 */

#include <QApplication>
#include <QLabel>
#include <QWidget>

int main(int argc, char *argv[ ])
{
	QApplication app(argc, argv);
	QLabel hello("<center>Welcome to my first Qt program</center>");
	hello.setWindowTitle("My First Qt Program");
	hello.setWindowFlags(Qt::WindowStaysOnTopHint);
	hello.resize(400, 400);
	hello.show();
	return app.exec();

}
