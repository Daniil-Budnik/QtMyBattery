// Copyright © 2021 Daniil Budnik. All rights reserved.
// Author: Daniil Budnik. Contacts: <daniil.budnik@gmail.com>
// License: https://opensource.org/licenses/LGPL-2.1

#include "mybattery.h"

// Конструктор
MyBattery::MyBattery(QWidget *parent) : QLabel(parent){

    BatteryValue = 100;
    this->setPixmap(QPixmap(":/Battery/100"));
    this->setScaledContents(true);
}

// Деструкторы
MyBattery::~MyBattery(){
    this->deleteLater();
}

// Установка уровня заряда
void MyBattery::setEnergy(unsigned short value){

    if(value > 100){ return; }

    BatteryValue = value;
    emit batteryEnergy(value);

    if(value <= 20)                     {
        this->setPixmap(QPixmap(":/Battery/20"));
    }

    else if(value > 20 and value <= 40) {
        this->setPixmap(QPixmap(":/Battery/40"));
    }

    else if(value > 40 and value <= 60) {
        this->setPixmap(QPixmap(":/Battery/60"));
    }

    else if(value > 60 and value <= 80) {
        this->setPixmap(QPixmap(":/Battery/80"));
    }

    else if(value > 80 and value <= 100){
        this->setPixmap(QPixmap(":/Battery/100"));
    }
}

// Вернуть уровень заряда
unsigned short MyBattery::getEnergy(){
    return BatteryValue;
}



