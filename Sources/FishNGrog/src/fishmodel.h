#ifndef FISHMODEL_H
#define FISHMODEL_H

#include <QObject>
#include <QAbstractListModel>

#include "fishlist.h"

class FishModel : public QAbstractListModel
{
    Q_OBJECT
    FishList * m_list = nullptr;
public:
    FishModel(QObject * parent = nullptr);
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

#endif // FISHMODEL_H
