#ifndef FISHLIST_H
#define FISHLIST_H

#include <QObject>
#include <QList>

#include "fish.h"

using namespace std;

class FishList : public QObject
{
    Q_OBJECT
    QList<Fish*> m_fish;
public:
    explicit FishList(QObject *parent = nullptr);
    void push_back(Fish* fish);
    void remove(int index);
    Fish* operator[](int index) const;
    void insert(int index, Fish* fish);
    Q_INVOKABLE int size() const;

    ~FishList();
protected:
    void registerFish(int index);
    void unregisterFish(int index);
    void reregisterFish(int index);

signals:
    void pre_insert(int index);
    void post_insert(int index);
    void itemChanged(int position);
};

#endif // FISHLIST_H
