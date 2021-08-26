// Copyright © 2021 Daniil Budnik. All rights reserved.
// Author: Daniil Budnik. Contacts: <daniil.budnik@gmail.com>
// License: https://opensource.org/licenses/LGPL-2.1

#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
