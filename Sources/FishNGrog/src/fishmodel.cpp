#include "fishmodel.h"

FishModel::FishModel(QObject *parent)
    : QAbstractListModel(parent), m_list(nullptr)
{ }

void FishModel::setList(FishList *list)
{
    beginResetModel();

    if ( m_list )
        disconnect(m_list);

    m_list = list;

    if ( m_list ) {
        connect(m_list, &FishList::pre_insert, [=](int index){
            this->beginInsertRows(QModelIndex(),index, index);
        } );
        connect(m_list, &FishList::post_insert,  [=](){ // On se fout de l'index
            this->endInsertRows();
        } );
        connect(m_list, &FishList::itemChanged, [=](int index){
            auto row = this->index(index);
            emit FishModel::dataChanged(row, row);
        });
    }
    endResetModel();
}


int FishModel::rowCount(const QModelIndex &) const
{
    return m_list ? m_list->size() : 0;
}

