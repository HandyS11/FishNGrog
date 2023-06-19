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
    return rowCount();
}

int FishModel::rowCount() const
{
    return m_list ? m_list->size() : 0;
}

bool FishModel::append(Fish * fish)
{
    beginInsertRows(QModelIndex(), rowCount(), rowCount());
    m_list->push_back(fish);
    endInsertRows();
}

QVariant FishModel::data(const QModelIndex &index, int role) const
{
    Fish* fish = m_list->operator[](index.row());
    switch(role){
        case RName:
            return fish->name();
            break;
        default:
            return QVariant::fromValue(fish);
            break;
    }

   // return QVariant::fromValue(m_list->operator[](index.row()));
}

QHash<int, QByteArray> FishModel::roleNames() const
{
    QHash<int, QByteArray> h;
    h[RDisplay] = "display";
    h[RName] = "name";
    h[RFull] = "full";

    return h;
}

