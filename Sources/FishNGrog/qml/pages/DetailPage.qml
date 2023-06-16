import QtQuick 2.0
import Sailfish.Silica 1.0

Page {
    id: page
    allowedOrientations: Orientation.All
    PageHeader {
        id: header
        title: qsTr("Wreckers")
    }

    Column {
        anchors.top: header.bottom // permet d'ancrer le haut de la colonne sur le bas du header
        Text {
            id: description
            text: qsTr("Lorem ipsum dolor sit amet conjectetur")
            color: Theme.primaryColor
        }
        Text {
            id: isTrophy
            text: qsTr("Is a Trophy")
            visible: true
            color: Theme.primaryColor
        }
        Text {
            id: price
            text: qsTr("1,125£")
            color: Theme.primaryColor
        }
        Text {
            id: quality
            text: qsTr("Bonne qualité")
            color: Theme.primaryColor
        }
        Text {
            id: cookness
            text: qsTr("180s")
            color: Theme.primaryColor
        }
        Text {
            id: bait
            text: qsTr("Worms")
            color: Theme.primaryColor
        }Text {
            id: location
            text: qsTr("Snake Island")
            color: Theme.primaryColor
        }
    }
}

