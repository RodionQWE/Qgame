
#include <iostream>
#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QMainWindow>
#include <QPixmap>
#include <QString>
#include <QWidget>

using namespace std;
/*
class MyLabel:public QLabel
{
	int counter;
public:
	
	Q_OBJECT
	MyLabel(QString text);
public slots:
	void nextPers();
};

MyLabel::MyLabel(QString text):QLabel(text)
{
	counter = 0;
}

void Mylabel::nextPers()
{
	if (counter = 0)
		setText("Второй студент\nМуртазин Данияр");
}
*/
int main(int argc, char **argv){
	QApplication app(argc, argv);
	QMainWindow window;
	window.resize(1500, 1000);
	window.setStyleSheet("background-color: rgb(187, 187, 187);");
	window.show();
	QFont font;
	font.setPixelSize(30);
	QLabel labelText("Здравствуйте, Ален Жуматаевич!\nСтуденты ожидают,\nИх судьба в Ваших руках!\nВы готовы?", &window);
	labelText.setGeometry(0, 0, 600, 200);
	labelText.setStyleSheet("color: rgb(100, 100, 187)");
	labelText.setFont(font);
	labelText.show();
	
	font.setPixelSize(15);
	QLabel label1th("Первый студент\nМиськив Кирилл", &window);
	label1th.setGeometry(660, 180, 600, 200);
	label1th.setStyleSheet("color: rgb(100, 100, 187)");
	label1th.setFont(font);

	QLabel label2th("Второй студент\nМуртазин Данияр", &window);
	label2th.setGeometry(660, 180, 600, 200);
	label2th.setStyleSheet("color: rgb(100, 100, 187)");
	label2th.setFont(font);

	QLabel label3th("Третий студент\nШульженко Родион", &window);
	label3th.setGeometry(660, 180, 600, 200);
	label3th.setStyleSheet("color: rgb(100, 100, 187)");
	label3th.setFont(font);

	

	font.setPixelSize(20);
	QLabel labelK("Здравствуйте! Я сделал все задания, честно!\n Ну может немного осталось...\nНет, ну я всё доделаю, обещаю!", &window);
	labelK.setGeometry(240, 270, 350, 200);
	labelK.setStyleSheet("color: rgb(100, 100, 187)");
	labelK.setFont(font);

	font.setPixelSize(20);
	QLabel labelD("Здравствуйте! Я не выполнил ничего,\nно я сделал змейку!\nМогу и на зачёт пойти!", &window);
	labelD.setGeometry(240, 270, 350, 200);
	labelD.setStyleSheet("color: rgb(100, 100, 187)");
	labelD.setFont(font);

	font.setPixelSize(20);
	QLabel labelR("Здравствуйте! Я всё сделал,\nхоть и криво)", &window);
	labelR.setGeometry(240, 270, 350, 200);
	labelR.setStyleSheet("color: rgb(100, 100, 187)");
	labelR.setFont(font);
	
	
	
	font.setPixelSize(40);
	QLabel labelV("Как поступите?", &window);
	labelV.setGeometry(600, 600, 350, 200);
	labelV.setStyleSheet("color: rgb(100, 100, 187)");
	labelV.setFont(font);

	font.setPixelSize(25);
	QLabel labelRZR("Родион всё решил", &window);
	labelRZR.setGeometry(1070, 720, 350, 200);
	labelRZR.setStyleSheet("color: rgb(100, 50, 50)");
	labelRZR.setFont(font);
	

	font.setPixelSize(15);
	QLabel labelRR("Ведомость потеряна\nневозможно отчислить", &window);
	labelRR.setGeometry(1070, 800, 350, 200);
	labelRR.setStyleSheet("color: rgb(100, 50, 50)");
	labelRR.setFont(font);
	

	
	
	
	QFont font1;
        font1.setPixelSize(60);
	QLabel labelText1("ИГРА НА ВЫБЫВАНИЕ", &window);
        labelText1.setGeometry(400, 0, 800, 200);
        labelText1.setStyleSheet("color: rgb(100, 100, 187)");
        labelText1.setFont(font1);


        font1.setPixelSize(70);
	QLabel labelTextEnd("КОНЕЦ ИГРЫ", &window);
        labelTextEnd.setGeometry(450, 0, 700, 200);
        labelTextEnd.setStyleSheet("color: rgb(100, 100, 187)");
        labelTextEnd.setFont(font1);



	QLabel label(&window);
	QPixmap myPixmap("1.png");
	label.setPixmap( myPixmap );
	label.setGeometry(500, 0, 500, 180);
	label.show();

	QLabel labelKpng(&window);
	QPixmap myPixmapK("kirill1.png");
	labelKpng.setPixmap( myPixmapK );
	labelKpng.setGeometry(650, 300, 500, 180);

	QLabel labelDpng(&window);
	QPixmap myPixmapD("D1.png");
	labelDpng.setPixmap( myPixmapD );
	labelDpng.setGeometry(600, 400, 600, 250);

	QLabel labelRpng(&window);
	QPixmap myPixmapR("Rodion.png");
	labelRpng.setPixmap( myPixmapR );
	labelRpng.setGeometry(600, 300, 600, 250);





	QLabel labelKZ(&window);
	QPixmap myPixmapKZ("kirillsin.png");
	labelKZ.setPixmap( myPixmapKZ );
	labelKZ.setGeometry(200, 480, 150, 180);	
	
	QLabel labelDZ(&window);
	QPixmap myPixmapDZ("DZ.png");
	labelDZ.setPixmap( myPixmapDZ );
	labelDZ.setGeometry(200, 480, 150, 180);

	QLabel labelRZ(&window);
	QPixmap myPixmapRZ("RZ.png");
	labelRZ.setPixmap( myPixmapRZ );
	labelRZ.setGeometry(200, 480, 150, 180);
	


	QLabel labelKOt(&window);
	QPixmap myPixmapKOt("kirillsch.png");
	labelKOt.setPixmap( myPixmapKOt );
	labelKOt.setGeometry(1050, 480, 150, 180);

	QLabel labelDOt(&window);
	QPixmap myPixmapDOt("DOt.png");
	labelDOt.setPixmap( myPixmapDOt );
	labelDOt.setGeometry(1050, 480, 150, 180);

	QLabel labelROt(&window);
	QPixmap myPixmapROt("ROT.png");
	labelROt.setPixmap( myPixmapROt );
	labelROt.setGeometry(1050, 480, 150, 180);


	QLabel labelRip(&window);
	QPixmap myPixmapRip("rip.png");
	labelRip.setPixmap( myPixmapRip );
	labelRip.setGeometry(650, 300, 150, 180);


	QLabel labelZach(&window);
	QPixmap myPixmapZ("zach.png");
	labelZach.setPixmap( myPixmapZ );
	labelZach.setGeometry(2, 500, 200, 180);

	QLabel labelEx(&window);
	QPixmap myPixmapEx("exit.png");
	labelEx.setPixmap( myPixmapEx );
	labelEx.setGeometry(1200, 400, 500, 300);


/////////////////////////////////////////////K

//	labelKpng.show();
	QPushButton button("ДА", &window);
	button.setGeometry(0, 200, 200, 100);
	button.show();

	QPushButton buttonZ("На зачет", &window);
	buttonZ.setGeometry(200, 800, 200, 100);

	QPushButton buttonOt("Отпустить", &window);
	buttonOt.setGeometry(400, 800, 200, 100);

	QPushButton buttonRip("Отчислить", &window);
	buttonRip.setGeometry(600, 800, 200, 100);

	QPushButton buttonEnd("Принять решение", &window);
	buttonEnd.setGeometry(800, 800, 200, 100);

/////////////////////////////////////////////////////////D
	
	QPushButton buttonDZ("На зачет", &window);
	buttonDZ.setGeometry(200, 800, 200, 100);

	QPushButton buttonDOt("Отпустить", &window);
	buttonDOt.setGeometry(400, 800, 200, 100);

	QPushButton buttonDRip("Отчислить", &window);
	buttonDRip.setGeometry(600, 800, 200, 100);

	QPushButton buttonDEnd("Принять решение", &window);
	buttonDEnd.setGeometry(800, 800, 200, 100);
	
/////////////////////////////////////////////////////////R
	
	QPushButton buttonRZ("На зачет", &window);
	buttonRZ.setGeometry(200, 800, 200, 100);

	QPushButton buttonROt("Отпустить", &window);
	buttonROt.setGeometry(400, 800, 200, 100);

	QPushButton buttonRRip("Отчислить", &window);
	buttonRRip.setGeometry(600, 800, 200, 100);

	QPushButton buttonREnd("Принять решение", &window);
	buttonREnd.setGeometry(800, 800, 200, 100);





//	button.resize(200, 200);

	QObject:: connect(&button, SIGNAL(clicked()), &labelText, SLOT(hide()));
	QObject:: connect(&button, SIGNAL(clicked()), &button, SLOT(hide()));
	QObject:: connect(&button, SIGNAL(clicked()), &label, SLOT(hide()));
	QObject:: connect(&button, SIGNAL(clicked()), &labelText1, SLOT(show()));
	QObject:: connect(&button, SIGNAL(clicked()), &labelV, SLOT(show()));
	QObject:: connect(&button, SIGNAL(clicked()), &label1th, SLOT(show()));		//Hello kirill
	QObject:: connect(&button, SIGNAL(clicked()), &labelK, SLOT(show()));		//kirill
	QObject:: connect(&button, SIGNAL(clicked()), &labelKpng, SLOT(show()));		//png kirill
	QObject:: connect(&button, SIGNAL(clicked()), &labelZach, SLOT(show()));		//png zach
	QObject:: connect(&button, SIGNAL(clicked()), &labelEx, SLOT(show()));		// png exit

	QObject:: connect(&button, SIGNAL(clicked()), &buttonZ, SLOT(show()));
	QObject:: connect(&button, SIGNAL(clicked()), &buttonOt, SLOT(show()));	
	QObject:: connect(&button, SIGNAL(clicked()), &buttonRip, SLOT(show()));	
	QObject:: connect(&button, SIGNAL(clicked()), &buttonEnd, SLOT(show()));	

	QObject:: connect(&buttonZ, SIGNAL(clicked()), &labelKpng, SLOT(hide()));
	QObject:: connect(&buttonZ, SIGNAL(clicked()), &labelKZ, SLOT(show()));		//kirill zach
	QObject:: connect(&buttonZ, SIGNAL(clicked()), &labelKOt, SLOT(hide()));	//kirill Ot
	QObject:: connect(&buttonZ, SIGNAL(clicked()), &labelRip, SLOT(hide()));	//kirill Ot

	QObject:: connect(&buttonOt, SIGNAL(clicked()), &labelKOt, SLOT(show()));	//kirill Ot
	QObject:: connect(&buttonOt, SIGNAL(clicked()), &labelKpng, SLOT(hide()));	//kirill Ot
	QObject:: connect(&buttonOt, SIGNAL(clicked()), &labelKZ, SLOT(hide()));		//kirill zach
	QObject:: connect(&buttonOt, SIGNAL(clicked()), &labelRip, SLOT(hide()));	//kirill Ot

	
	QObject:: connect(&buttonRip, SIGNAL(clicked()), &labelRip, SLOT(show()));	//Rip
	QObject:: connect(&buttonRip, SIGNAL(clicked()), &labelKpng, SLOT(hide()));	//
	QObject:: connect(&buttonRip, SIGNAL(clicked()), &labelKOt, SLOT(hide()));	//
	QObject:: connect(&buttonRip, SIGNAL(clicked()), &labelKZ, SLOT(hide()));	//

	QObject:: connect(&buttonEnd, SIGNAL(clicked()), &labelRip, SLOT(hide()));	//Rip
	QObject:: connect(&buttonEnd, SIGNAL(clicked()), &labelKpng, SLOT(hide()));	//
	QObject:: connect(&buttonEnd, SIGNAL(clicked()), &labelKOt, SLOT(hide()));	//
	QObject:: connect(&buttonEnd, SIGNAL(clicked()), &labelKZ, SLOT(hide()));	//
	QObject:: connect(&buttonEnd, SIGNAL(clicked()), &label1th, SLOT(hide()));		//
	QObject:: connect(&buttonEnd, SIGNAL(clicked()), &labelK, SLOT(hide()));		//
	QObject:: connect(&buttonEnd, SIGNAL(clicked()), &label2th, SLOT(show()));		//Hello D
	QObject:: connect(&buttonEnd, SIGNAL(clicked()), &labelD, SLOT(show()));		//D
	QObject:: connect(&buttonEnd, SIGNAL(clicked()), &labelDpng, SLOT(show()));		//D
	QObject:: connect(&buttonEnd, SIGNAL(clicked()), &buttonZ, SLOT(hide()));		//
	QObject:: connect(&buttonEnd, SIGNAL(clicked()), &buttonOt, SLOT(hide()));		//
	QObject:: connect(&buttonEnd, SIGNAL(clicked()), &buttonDZ, SLOT(show()));		//
	QObject:: connect(&buttonEnd, SIGNAL(clicked()), &buttonDOt, SLOT(show()));		//
	QObject:: connect(&buttonEnd, SIGNAL(clicked()), &buttonDEnd, SLOT(show()));	
	QObject:: connect(&buttonEnd, SIGNAL(clicked()), &buttonEnd, SLOT(hide()));	



	
	QObject:: connect(&buttonDZ, SIGNAL(clicked()), &labelDZ, SLOT(show()));		//Daniyar zach
	QObject:: connect(&buttonDZ, SIGNAL(clicked()), &labelDpng, SLOT(hide()));		//Daniyar zach
	QObject:: connect(&buttonDZ, SIGNAL(clicked()), &labelDOt, SLOT(hide()));		//Daniyar zach
	QObject:: connect(&buttonDZ, SIGNAL(clicked()), &labelRip, SLOT(hide()));		//Daniyar zach

	QObject:: connect(&buttonDOt, SIGNAL(clicked()), &labelDOt, SLOT(show()));		//Daniyar OTPYSTILI
	QObject:: connect(&buttonDOt, SIGNAL(clicked()), &labelDpng, SLOT(hide()));		//Daniyar 
	QObject:: connect(&buttonDOt, SIGNAL(clicked()), &labelDZ, SLOT(hide()));		//Daniyar 
	QObject:: connect(&buttonDOt, SIGNAL(clicked()), &labelRip, SLOT(hide()));		//Daniyar 
	
	QObject:: connect(&buttonRip, SIGNAL(clicked()), &labelDOt, SLOT(hide()));		//Daniyar rip
	QObject:: connect(&buttonRip, SIGNAL(clicked()), &labelDpng, SLOT(hide()));		//Daniyar rip
	QObject:: connect(&buttonRip, SIGNAL(clicked()), &labelDZ, SLOT(hide()));		//Daniyar rip

	QObject:: connect(&buttonDEnd, SIGNAL(clicked()), &labelRip, SLOT(hide()));	//Rip
	QObject:: connect(&buttonDEnd, SIGNAL(clicked()), &labelDpng, SLOT(hide()));	//
	QObject:: connect(&buttonDEnd, SIGNAL(clicked()), &labelDOt, SLOT(hide()));	//
	QObject:: connect(&buttonDEnd, SIGNAL(clicked()), &labelDZ, SLOT(hide()));	//
//	QObject:: connect(&buttonDEnd, SIGNAL(clicked()), &labelRZ, SLOT(show()));	//
	QObject:: connect(&buttonDEnd, SIGNAL(clicked()), &label2th, SLOT(hide()));		//
	QObject:: connect(&buttonDEnd, SIGNAL(clicked()), &labelD, SLOT(hide()));		//
	QObject:: connect(&buttonDEnd, SIGNAL(clicked()), &labelRpng, SLOT(show()));		//
	QObject:: connect(&buttonDEnd, SIGNAL(clicked()), &label3th, SLOT(show()));		//Hello Rodion
	QObject:: connect(&buttonDEnd, SIGNAL(clicked()), &labelR, SLOT(show()));		//D

	QObject:: connect(&buttonDEnd, SIGNAL(clicked()), &buttonDZ, SLOT(hide()));		//
	QObject:: connect(&buttonDEnd, SIGNAL(clicked()), &buttonDOt, SLOT(hide()));		//
	QObject:: connect(&buttonDEnd, SIGNAL(clicked()), &buttonRZ, SLOT(show()));		//
	QObject:: connect(&buttonDEnd, SIGNAL(clicked()), &buttonROt, SLOT(show()));		//
	QObject:: connect(&buttonDEnd, SIGNAL(clicked()), &buttonDRip, SLOT(hide()));	//Rip
	QObject:: connect(&buttonDEnd, SIGNAL(clicked()), &buttonRRip, SLOT(show()));	//Rip
	QObject:: connect(&buttonDEnd, SIGNAL(clicked()), &buttonREnd, SLOT(show()));	
	QObject:: connect(&buttonDEnd, SIGNAL(clicked()), &buttonDEnd, SLOT(hide()));	

	QObject:: connect(&buttonRZ, SIGNAL(clicked()), &labelRZ, SLOT(show()));		//R zach
	QObject:: connect(&buttonRZ, SIGNAL(clicked()), &labelRpng, SLOT(hide()));		//R zach
	QObject:: connect(&buttonRZ, SIGNAL(clicked()), &labelROt, SLOT(hide()));		//R zach
	QObject:: connect(&buttonRZ, SIGNAL(clicked()), &labelRZR, SLOT(show()));		//R zach

	QObject:: connect(&buttonROt, SIGNAL(clicked()), &labelROt, SLOT(show()));		// otpystili
	QObject:: connect(&buttonROt, SIGNAL(clicked()), &labelRpng, SLOT(hide()));		//
	QObject:: connect(&buttonROt, SIGNAL(clicked()), &labelRZ, SLOT(hide()));		//
//	QObject:: connect(&buttonROt, SIGNAL(clicked()), &labelRip, SLOT(hide()));		//

	
	QObject:: connect(&buttonRRip, SIGNAL(clicked()), &labelRR, SLOT(show()));		//

	QObject:: connect(&buttonREnd, SIGNAL(clicked()), &labelTextEnd, SLOT(show()));		//

	QObject:: connect(&buttonREnd, SIGNAL(clicked()), &labelText1, SLOT(hide()));		//
	return app.exec();
}
