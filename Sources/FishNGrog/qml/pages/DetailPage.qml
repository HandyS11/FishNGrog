import QtQuick 2.0
import Sailfish.Silica 1.0
import FishLib 1.0

Page {
    id: page
    allowedOrientations: Orientation.All

    property Fish fish

    PageHeader {
        id: header
        title: fish.name
    }

    Column {
        Component.onCompleted: console.log(fish)
        anchors.top: header.bottom // permet d'ancrer le haut de la colonne sur le bas du header
        Image {
            id: fishImage
            source: "/usr/share/FishNGrog/images/" + fish.typeS + ".png"
        }
        Text {
            id: isTrophy
            text: qsTr("Is a Trophy")
            visible: fish.isTrophy
            color: Theme.primaryColor
        }
        Row {
            Text {
                id: price
                text: fish.price
                color: Theme.primaryColor
            }
            Image {
                id: priceImage
                source: "/usr/share/FishNGrog/images/gold.png"
            }
        }
        Text {
            id: type
            text: qsTr("Type: ") + fish.typeS
            color: Theme.primaryColor
        }
        Text {
            id: quality
            text: qsTr("Quality: ") + fish.qualityS
            color: Theme.primaryColor
        }
        Text {
            id: cookness
            text: qsTr("Cookness: ") + fish.cooknessS
            color: Theme.primaryColor
        }
        Text {
            id: bait
            text: qsTr("Bait: ") + fish.baitS
            color: Theme.primaryColor
        }
        Text {
            id: location
            text: qsTr("Location: ") + fish.locationS
            color: Theme.primaryColor
        }
    }
}

