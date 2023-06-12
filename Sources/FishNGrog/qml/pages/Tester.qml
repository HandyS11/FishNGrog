import QtQuick 2.0
import Sailfish.Silica 1.0
import pesces 1.0

Page {
    property Fish gege: Fish { name: "bébert" }
    Column {
        Label {
            text: gege.name
        }
    }

}
