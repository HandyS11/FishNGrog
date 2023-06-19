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
| ![](Documentions/screens/master.png) | ![](Documentation/screens/detail.png) |

## ⚙️ Architecture

```mermaid
classDiagram

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
```
   
## ✍️ Credits 

* Author: [**Mathis Ribemont**](https://github.com/TEDDAC)
* Author: [**Valetin Clergue**](https://github.com/HandyS11)