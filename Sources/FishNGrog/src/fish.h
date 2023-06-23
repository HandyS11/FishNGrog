#ifndef FISH_H
#define FISH_H

#include <QObject>

#include "enums.h"

class Fish : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString name         READ name       WRITE setName       NOTIFY nameChanged)
    Q_PROPERTY(bool isTrophy        READ isTrophy   WRITE setIsTrophy   NOTIFY isTrophyChanged)
    Q_PROPERTY(int price            READ price      WRITE setPrice      NOTIFY priceChanged)
    Q_PROPERTY(FType type           READ type       WRITE setType       NOTIFY typeChanged)
    Q_PROPERTY(QString typeS        READ typeS      NOTIFY typeChanged)
    Q_PROPERTY(Quality quality      READ quality    WRITE setQuality    NOTIFY qualityChanged)
    Q_PROPERTY(QString qualityS     READ qualityS   NOTIFY qualityChanged)
    Q_PROPERTY(Cookness cookness    READ cookness   WRITE setCookness   NOTIFY cooknessChanged)
    Q_PROPERTY(QString cooknessS    READ cooknessS  NOTIFY cooknessChanged)
    Q_PROPERTY(Bait bait            READ bait       WRITE setBait       NOTIFY baitChanged)
    Q_PROPERTY(QString baitS        READ baitS      NOTIFY baitChanged)
    Q_PROPERTY(Location location    READ location   WRITE setLocation   NOTIFY locationChanged)
    Q_PROPERTY(QString locationS    READ locationS  NOTIFY locationChanged)

    QString m_name;
    bool m_isTrophy;
    int m_price;
    FType m_type;
    Quality m_quality;
    Cookness m_cookness;
    Bait m_bait;
    Location m_location;
public:
    Fish(QString name, bool isTrophy, int price, FType type, Quality quality, Cookness cookness, Bait bait, Location location,
         QObject *parent = nullptr);
    Fish(const Fish& other);
    Fish();
    QString name() const;
    bool isTrophy() const;
    int price() const;
    FType type() const;
    QString typeS() const;
    Quality quality() const;
    QString qualityS() const;
    Cookness cookness() const;
    QString cooknessS() const;
    Bait bait() const;
    QString baitS() const;
    Location location() const;
    QString locationS() const;
public slots:
    void setName(QString name);
    void setIsTrophy(bool isTrophy);
    void setPrice(int price);
    void setType(FType type);
    void setQuality(Quality quality);
    void setCookness(Cookness cookness);
    void setBait(Bait bait);
    void setLocation(Location location);
signals:
    void nameChanged(QString name);
    void isTrophyChanged(bool isTrophy);
    void priceChanged(int price);
    void typeChanged(FType type);
    void qualityChanged(Quality quality);
    void cooknessChanged(Cookness cookness);
    void baitChanged(Bait bait);
    void locationChanged(Location location);
};

#endif // FISH_H
