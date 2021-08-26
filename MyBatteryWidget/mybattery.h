// Copyright © 2021 Daniil Budnik. All rights reserved.
// Author: Daniil Budnik. Contacts: <daniil.budnik@gmail.com>
// License: https://opensource.org/licenses/LGPL-2.1

#ifndef MYBATTERY_H
#define MYBATTERY_H

#include <QWidget>
#include <QLabel>
#include <QVector>

class MyBattery : public QLabel
{
    Q_OBJECT
public:

    explicit MyBattery(QWidget *parent = nullptr);
    ~MyBattery();
    unsigned short getEnergy();

public slots:
    void setEnergy(unsigned short value);

signals:
    void batteryEnergy(unsigned short value);

private:

    unsigned short BatteryValue = 100;

    QPixmap Battery_100 = QPixmap(":/Battery/100");
    QPixmap Battery_80  = QPixmap(":/Battery/80");
    QPixmap Battery_60  = QPixmap(":/Battery/60");
    QPixmap Battery_40  = QPixmap(":/Battery/40");
    QPixmap Battery_20  = QPixmap(":/Battery/20");

};

#endif // MYBATTERY_H
