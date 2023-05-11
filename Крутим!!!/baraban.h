#ifndef BARABAN_H
#define BARABAN_H

#include <QMainWindow>
#include <iostream>
#include <QPixmap>
#include <QPainter>
#include <QLabel>
#include <windows.h>
#include <fstream>
#include <winuser.h>
#include <algorithm>

QT_BEGIN_NAMESPACE
namespace Ui { class Baraban; }
QT_END_NAMESPACE

class Baraban : public QMainWindow
{
  Q_OBJECT

public:
  Baraban(QWidget *parent = nullptr);
  ~Baraban();

private slots:
  void on_Go_clicked();

  void on_rotate_clicked();

private:
  Ui::Baraban *ui;
};
#endif // BARABAN_H
