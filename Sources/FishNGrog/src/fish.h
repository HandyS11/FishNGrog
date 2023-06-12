#ifndef FISH_H
#define FISH_H

#include <QObject>

using namespace std;

enum Type { Splashtails, Pondies, Islehoppers, Ancientscales, Plentifins, Wildsplashed, Devilfish, Battlegills, Wreckers, Stormfish };
enum Quality { Base, Common, Uncommon, Rare, Night };
enum Cookness { Raw, Undercooked, Cooked, Burn };
enum Bait { None, Leeches, Earthworms, Grubs };
enum Location { Everywhere, Lakes, Isles_Islands, South, The_Shores_of_Plenty, The_Wilds, The_Devils_Roar, Forteress, Shipwrecks, Storms};

class Fish : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString name         READ name       WRITE setName       NOTIFY nameChanged)
    Q_PROPERTY(bool isTrophy        READ isTrophy   WRITE setIsTrophy   NOTIFY isTrophyChanged)
    Q_PROPERTY(int price            READ price      WRITE setPrice      NOTIFY priceChanged)
    Q_PROPERTY(Type type            READ type       WRITE setType       NOTIFY typeChanged)
    Q_PROPERTY(Quality quality      READ quality    WRITE setQuality    NOTIFY qualityChanged)
    Q_PROPERTY(Cookness cookness    READ cookness   WRITE setCookness   NOTIFY cooknessChanged)
    Q_PROPERTY(Bait bait            READ bait       WRITE setBait       NOTIFY baitChanged)
    Q_PROPERTY(Location location    READ location   WRITE setLocation   NOTIFY locationChanged)

    QString m_name;
    bool m_isTrophy;
    int m_price;
    Type m_type;
    Quality m_quality;
    Cookness m_cookness;
    Bait m_bait;
    Location m_location;
public:
    explicit Fish(QString& name, bool& isTrophy, int& price,
                  Type& type, Quality& quality, Cookness& cookness,
                  Bait& bait, Location& location,
                  QObject *parent = nullptr);   // ??
    Fish();
    QString name() const;
    bool isTrophy() const;
    int price() const;
    Type type() const;
    Quality quality() const;
    Cookness cookness() const;
    Bait bait() const;
    Location location() const;
public slots:
    void setName(QString name);
    void setIsTrophy(bool isTrophy);
    void setPrice(int price);
    void setType(Type type);
    void setQuality(Quality quality);
    void setCookness(Cookness cookness);
    void setBait(Bait bait);
    void setLocation(Location location);
signals:
    void nameChanged(QString name);
    void isTrophyChanged(bool isTrophy);
    void priceChanged(int price);
    void typeChanged(Type type);
    void qualityChanged(Quality quality);
    void cooknessChanged(Cookness cookness);
    void baitChanged(Bait bait);
    void locationChanged(Location location);
};

#endif // FISH_H
