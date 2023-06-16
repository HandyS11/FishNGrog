import QtQuick 2.0
import Sailfish.Silica 1.0
import pesces 1.0

Page {
    property Fish gege: Fish { name: "bébert" }
    Column {
        Label {
            text: gege.name
        }
        Image {
            id: image
            source: "/usr/share/FishNGrog/images/gold.png"
        }
        Image {
            id: image2
            source: "/usr/share/FishNGrog/images/FishNGrog.png"
        }
    }

}
