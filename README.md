# QtMyBattery  
 > Виджет для отображения уровня заряда батареи на экране.

    Уровень заряда от 81 до 100
![alt tag](https://github.com/Daniil-Budnik/QtMyBattery/blob/main/Image/100.png?raw=true "100")

    Уровень заряда от 61 до 80
![alt tag](https://github.com/Daniil-Budnik/QtMyBattery/blob/main/Image/80.png?raw=true "80")

    Уровень заряда от 41 до 60
![alt tag](https://github.com/Daniil-Budnik/QtMyBattery/blob/main/Image/60.png?raw=true "60")

    Уровень заряда от 21 до 40
![alt tag](https://github.com/Daniil-Budnik/QtMyBattery/blob/main/Image/40.png?raw=true "40")

    Уровень заряда от 0 до 20
![alt tag](https://github.com/Daniil-Budnik/QtMyBattery/blob/main/Image/20.png?raw=true "20")


# Описание

 > Установка уровня заряда (от 0 до 100) "является слотом"
   
    void setEnergy(unsigned short value) 

 > Вернуть значение уровня заряда

    unsigned short getEnergy()
    
 > Сигнал об любом изминении состояния уровня заряда

    void batteryEnergy(unsigned short value);

# Внедрение в свой проект

 > 1)  Перенесите папку "MyBatteryWidget" со всем содержимим в папку с вашим проектом
 > 2)  Добавьте в программе QtCreator в свой проект все файлы из библиотеки
 > 3)  Создайте в UI QWidget и преобразуйте его в "MyBattery", путь к "MyBatteryWidget\mybattery.h" 
 > 4)  Импортируйте "MyBatteryWidget\mybattery.h" в коде программы, создайте экземпляр и все, можно работать!!!

# Модификация

 > Вы можете использовать свой набор картинок для отображения уровня заряда батареи.
 > Для это вам нужно заменить изображения в папке "MyBatteryWidget\Image".
 > Названия изображений должно совпадать, иначе, придётся править файл ресурсов.
