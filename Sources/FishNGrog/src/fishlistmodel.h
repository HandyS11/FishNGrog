#ifndef FISHLISTMODEL_H
#define FISHLISTMODEL_H

#include <QObject>
#include <QAbstractListModel>

#include "fishlist.h"

class FishListModel : public QAbstractListModel
{
    Q_OBJECT
    FishList * m_list = nullptr;
public:
    FishListModel(QObject * parent = nullptr);
    Q_INVOKABLE void setList(FishList * list);

    enum Roles {
        RDisplay = Qt::UserRole+1,
        RName,
        RIsTrophy,
        RPrice,
        RType,
        RQuality,
        RCookness,
        RBait,
        RLocation,
        RFull
    } ;
public:
    virtual int rowCount(const QModelIndex &parent) const override;
    int rowCount() const;
    bool append(Fish * fish);

    // QAbstractItemModel interface
public:
    QVariant data(const QModelIndex &index, int role) const override;
    QHash<int, QByteArray> roleNames() const override;
};

#endif // FISHLISTMODEL_H
