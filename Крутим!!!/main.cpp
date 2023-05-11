#include "baraban.h"

#include <QApplication>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  Baraban w;
  w.show();
  return a.exec();
}
