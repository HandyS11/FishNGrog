#include "fish.h"

Fish::Fish(QString name, bool isTrophy, int price,
           FType type, Quality quality, Cookness cookness,
           Bait bait, Location location,
           QObject *parent)
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

Fish::Fish(const Fish& other)
    : QObject(other.parent()),
      m_name(other.m_name),
      m_isTrophy(other.m_isTrophy),
      m_price(other.m_price),
      m_type(other.m_type),
      m_quality(other.m_quality),
      m_cookness(other.m_cookness),
      m_bait(other.m_bait),
      m_location(other.m_location)
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

FType Fish::type() const {
    return m_type;
}

QString Fish::typeS() const
{
    switch (m_type) {
        case Splashtails:
            return QString("Splashtails");
        break;
        case Pondies:
            return QString("Pondies");
        break;
        case Islehoppers:
            return QString("Islehoppers");
        break;
        case Ancientscales:
            return QString("Ancientscales");
        break;
        case Plentifins:
            return QString("Plentifins");
        break;
        case Wildsplashed:
            return QString("Wildsplashed");
        break;
        case Devilfish:
            return QString("Devilfish");
        break;
        case Battlegills:
            return QString("Battlegills");
        break;
        case Wreckers:
            return QString("Wreckers");
        break;
        case Stormfish:
            return QString("Stormfish");
        break;
        default:
            return QString("Unknown");
        break;
    }
}

Quality Fish::quality() const {
    return m_quality;
}

QString Fish::qualityS() const
{
    switch (m_quality) {
        case Common:
            return QString("Common");
        break;
        case Uncommon:
            return QString("Uncommon");
        break;
        case Rare:
            return QString("Rare");
        break;
        case Night:
            return QString("Night");
        default:
            return QString("Base");
        break;
    }
}

Cookness Fish::cookness() const {
    return m_cookness;
}

QString Fish::cooknessS() const
{
    switch (m_cookness) {
        case Undercooked:
            return QString("Undercooked");
        break;
        case Cooked:
            return QString("Cooked");
        break;
        case Burnt:
            return QString("Burnt");
        default:
            return QString("Raw");
        break;
    }
}

Bait Fish::bait() const {
    return m_bait;
}

QString Fish::baitS() const
{
    switch (m_bait) {
        case Leeches:
            return QString("Leeches");
        break;
        case Earthworms:
            return QString("Earthworms");
        break;
        case Grubs:
            return QString("Grubs");
        default:
            return QString("None");
        break;
    }
}

Location Fish::location() const {
    return m_location;
}

QString Fish::locationS() const
{
    switch (m_location) {
        case Lakes:
            return QString("Lakes");
        break;
        case Isles_Islands:
            return QString("Isles Islands");
        break;
        case South:
            return QString("South");
        break;
        case The_Shores_of_Plenty:
            return QString("The Shores of Plenty");
        break;
        case The_Wilds:
            return QString("The Wilds");
        break;
        case The_Devils_Roar:
            return QString("The Devils Roar");
        break;
        case Forteress:
            return QString("Forteress");
        break;
        case Shipwrecks:
            return QString("Shipwrecks");
        break;
        case Storms:
            return QString("Storms");
        break;
        case The_Ancient_Isles:
            return QString("The Ancient Isles");
        break;
        default:
            return QString("Everywhere");
        break;
    }
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

void Fish::setType(FType type) {
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
