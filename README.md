# QtMyBattery  
 > Виджет для отображения уровня заряда батареи на экране.

# Описание

 > Установка уровня заряда (от 0 до 100)
   
    void setEnergy(unsigned short value) 

 > Вернуть значение уровня заряда

    unsigned short getEnergy()

# Внедрение в свой проект

 1) Перенесите папку "MyBatteryWidget" со всем содержимим в папку с вашим проектом
 2) Добавьте в программе QtCreator в свой проект все файлы из библиотеки
 3) Создайте в UI QWidget и преобразуйте его в "MyBattery", путь к "MyBatteryWidget\mybattery.h" 
 4) Импортируйте "MyBatteryWidget\mybattery.h" в коде программы, создайте экземпляр и все, можно работать!!!


