// Copyright © 2021 Daniil Budnik. All rights reserved.
// Author: Daniil Budnik. Contacts: <daniil.budnik@gmail.com>
// License: https://opensource.org/licenses/LGPL-2.1

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Battery = ui->BAT;
    Battery->setEnergy(VAL);
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_MINUS_clicked(){
    VAL--; ui->T->setText(QString::number(VAL));
    Battery->setEnergy(VAL);
}


void MainWindow::on_PLUS_clicked(){
    VAL++; ui->T->setText(QString::number(VAL));
    Battery->setEnergy(VAL);
}

