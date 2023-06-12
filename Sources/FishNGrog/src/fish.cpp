#include "fish.h"

Fish::Fish(QString& name, bool& isTrophy, int& price,
           Type& type, Quality& quality, Cookness& cookness,
           Bait& bait, Location& location,
           QObject *parent)     // ??
    : QObject(parent),
      m_name(name),
      m_isTrophy(isTrophy),
      m_price(price),
      m_type(type),
      m_quality(quality),
      m_cookness(cookness),
      m_bait(bait),
      m_location(location)
{ }

Fish::Fish()
    :QObject(nullptr), m_name("Jérôme")
{}

QString Fish::name() const
{
    return m_name;
}

bool Fish::isTrophy() const {
    return m_isTrophy;
}

int Fish::price() const {
    return m_price;
}

Type Fish::type() const {
    return m_type;
}

Quality Fish::quality() const {
    return m_quality;
}

Cookness Fish::cookness() const {
    return m_cookness;
}

Bait Fish::bait() const {
    return m_bait;
}

Location Fish::location() const {
    return m_location;
}

void Fish::setName(QString name) {
    if (m_name == name)
        return;
    m_name = name;
    emit nameChanged(m_name);
}

void Fish::setIsTrophy(bool isTrophy) {
    if (m_isTrophy == isTrophy)
        return;
    m_isTrophy = isTrophy;
    emit isTrophyChanged(m_isTrophy);
}

void Fish::setPrice(int price) {
    if (m_price == price)
        return;
    m_price = price;
    emit isTrophyChanged(m_price);
}

void Fish::setType(Type type) {
    if (m_type == type)
        return;
    m_type = type;
    emit typeChanged(m_type);
}

void Fish::setQuality(Quality quality) {
    if (m_quality == quality)
        return;
    m_quality = quality;
    emit qualityChanged(quality);
}

void Fish::setCookness(Cookness cookness) {
    if (m_cookness == cookness)
        return;
    m_cookness = cookness;
    emit cooknessChanged(m_cookness);
}

void Fish::setBait(Bait bait) {
    if (m_bait == bait)
        return;
    m_bait = bait;
    emit baitChanged(m_bait);
}

void Fish::setLocation(Location location) {
    if (m_location == location)
        return;
    m_location = location;
    emit locationChanged(m_location);
}
