// Copyright © 2021 Daniil Budnik. All rights reserved.
// Author: Daniil Budnik. Contacts: <daniil.budnik@gmail.com>
// License: https://opensource.org/licenses/LGPL-2.1

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "MyBatteryWidget/mybattery.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_MINUS_clicked();
    void on_PLUS_clicked();

private:
    Ui::MainWindow *ui;
    MyBattery *Battery;
    unsigned short VAL = 95;

};
#endif // MAINWINDOW_H
