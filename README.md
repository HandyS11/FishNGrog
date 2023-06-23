# FishNGrog

## 📝 Purpose

Create a Sailfish app using Qt to experiment this technologie and os. 

- Create a master detail
- Use [**Sailfish**](https://docs.sailfishos.org/Tools/Sailfish_SDK/) features such as pull down menu.

## 🛠 Languages & tools

![skills](https://skillicons.dev/icons?i=qt,cpp)  

## ⚙️ Getting started

1. Install the [**SailfishSDK**](https://docs.sailfishos.org/Tools/Sailfish_SDK/)
2. Open **Sailfish IDE** (include in the sdk)
3. Open this project and add the requiered SDKs depending on your configurations.
4. Launch the emulator
5. Launch the app
6. You're done ;)

## 📍 Visuals

| Master | Detail |
| --- | --- |
| ![Image du master](Documentations/screens/MasterPage.png) | ![Image du détail](Documentations/screens/DetailPage.png) |

## ⚙️ Architecture

```mermaid
classDiagram

class QObject { }
QObject <|.. Fish
QObject <|.. FishList

class QAbstractListModel { }
QAbstractListModel <|.. FishModel

class Fish {
    +Name : QString
    +IsTrophy : bool
    +Price : int
    +FType : FType
    +Quality : Quality
    +Cookness
    +Bait
    +Location
    +Fish(QString name, bool isTrophy, int price, FType type, Quality quality, Cookness cookness, Bait bait, Location location)
    + Fish(const Fish& other)
    + Fish()
}

class FishList {
    +FishList(QObject *parent = nullptr)
    +push_back(Fish* fish)
    +remove(int index)
    +insert(int index, Fish* fish)
    #registerFish(int index)
    #unregisterFish(int index)
    #reregisterFish(int index)
}
FishList --> "*" Fish : Fish

class FishModel {
    +FishModel(QObject * parent = nullptr)
    +rowCount(const QModelIndex &parent)
}
FishModel --> "1" FishList : FishList

class Stub {
    +loadFish()
}
Stub --> "*" Fish : Fish

```
   
## ✍️ Credits 

* Author: [**Mathis Ribemont**](https://github.com/TEDDAC)
* Author: [**Valetin Clergue**](https://github.com/HandyS11)