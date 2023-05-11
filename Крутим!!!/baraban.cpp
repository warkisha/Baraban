#include "baraban.h"
#include "ui_baraban.h"

Baraban::Baraban(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::Baraban)
{
  ui->setupUi(this);
  QPixmap px1("./img/baraban2.png");
      ui->baraban->setPixmap( px1 );
      QPixmap px2("./img/pin.png");
      ui->MrPin->setPixmap( px2 );
      QPixmap px3("./img/background.jpg");
      ui->background->setPixmap( px3 );
}

Baraban::~Baraban()
{
  delete ui;
}


void Baraban::on_Go_clicked()
{
  int i = 15 * rand() % 4;
    while (i < 50){
        i++;
        POINT cp;
        GetCursorPos(&cp);
        SetCursorPos(570, 515);
        mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
      }
}


void Baraban::on_rotate_clicked()
{
  int x =  rand() % 362 + rand() % 24 * rand() % 3 ;

     QPixmap shipPixels("./img/baraban2.png");

     QPixmap rotatePixmap(shipPixels.size());
     rotatePixmap.fill(Qt::transparent);

     QPainter p(&rotatePixmap);
     p.setRenderHint(QPainter::Antialiasing);
     p.setRenderHint(QPainter::SmoothPixmapTransform);
     p.setRenderHint(QPainter::Antialiasing);
     p.translate(rotatePixmap.size().width() / 2, rotatePixmap.size().height() / 2);

     p.rotate(x); // градус
     p.translate(-rotatePixmap.size().width() / 2, -rotatePixmap.size().height() / 2);
     p.drawPixmap(0, 0, shipPixels);
     p.end();
     shipPixels = rotatePixmap;
     ui->baraban->setPixmap(shipPixels);
}

