import QtQuick 2.0
import Sailfish.Silica 1.0
import FishLib 1.0

Page {
    id: page
    allowedOrientations: Orientation.All

    SilicaListView {
        id: listView
        model: fishModel

        /*
        Component.onCompleted: {
            model.setList(fishList)
            console.log(fishList)
        }
        */

        anchors.fill: parent
        header: PageHeader {
            title: qsTr("FishNGrog")
        }
        delegate: BackgroundItem {
            id: delegate

            Label {
                x: Theme.horizontalPageMargin
                text: name
                anchors.verticalCenter: parent.verticalCenter
                color: delegate.highlighted ? Theme.highlightColor : Theme.primaryColor
            }
            onClicked: pageStack.animatorPush(Qt.resolvedUrl("DetailPage.qml"), {fish: full })
            // model fait référence à l'item passé au delegate
        }
        VerticalScrollDecorator {}
    }
}
