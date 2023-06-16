#include "fishlist.h"

FishList::FishList(QObject *parent) : QObject(parent)
{ }

void FishList::push_back(Fish *fish)
{
    int index = m_fish.size();
    m_fish.push_back(fish);
    registerFish(index);
}

Fish *FishList::operator[](int index) const
{
    Q_ASSERT(index < m_fish.size());
    return m_fish[index];
}

void FishList::insert(int index, Fish *fish)
{
    emit pre_insert(index);
    m_fish.insert(index, fish);

    for ( ; index < m_fish.size() ; ++index)
        reregisterFish(index);

    emit post_insert(index);
}

int FishList::size() const
{
    return m_fish.size();
}

FishList::~FishList()
{
    for ( auto fish : m_fish ) {
        delete fish;
    }
}

void FishList::registerFish(int index)
{
    auto fish = m_fish[index];

    connect(fish, &Fish::nameChanged,       [=](){ emit itemChanged(index); });
    connect(fish, &Fish::isTrophyChanged,   [=](){ emit itemChanged(index); });
    connect(fish, &Fish::priceChanged,      [=](){ emit itemChanged(index); });
    connect(fish, &Fish::typeChanged,       [=](){ emit itemChanged(index); });
    connect(fish, &Fish::qualityChanged,    [=](){ emit itemChanged(index); });
    connect(fish, &Fish::cooknessChanged,   [=](){ emit itemChanged(index); });
    connect(fish, &Fish::baitChanged,       [=](){ emit itemChanged(index); });
    connect(fish, &Fish::locationChanged,   [=](){ emit itemChanged(index); });
}

void FishList::unregisterFish(int index)
{
    auto cheese = (*this)[index];
    disconnect(cheese);
}

void FishList::reregisterFish(int index)
{
    unregisterFish(index);
    registerFish(index);
}
