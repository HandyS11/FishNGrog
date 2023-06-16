#ifndef FISHMODEL_H
#define FISHMODEL_H

#include <QObject>
#include <QAbstractListModel>

#include "fishlist.h"

class FishModel : public QAbstractListModel
{
    Q_OBJECT
    FishList * m_list;
public:
    FishModel(QObject * parent = nullptr);
    Q_INVOKABLE void setList(FishList * list);
public:
    virtual int rowCount(const QModelIndex &parent) const override;
};

#endif // FISHMODEL_H
