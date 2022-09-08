import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("QML-QRCode")

    function generateCode() {
        qrCodeImage.source = "image://qrcode/" + dataInput.text
    }

    Column {
        width: parent.width
        spacing: 20

        TextInput {
            id: dataInput
            width: parent.width
            text: "https://github.com/black-sheep-dev/qml-qrcode"
            focus: true
        }

        Button {
            anchors.horizontalCenter: parent.horizontalCenter
            text: "Generate"

            onClicked: generateCode()
        }

        Rectangle {
            anchors.horizontalCenter: parent.horizontalCenter
            width: Math.min(parent.width / 2, 256)
            height: width
            color: "white"

            Image {
                id: qrCodeImage
                anchors.centerIn: parent
                width: 0.8 * parent.width
                height: width
            }
        }
    }

    Component.onCompleted: generateCode()
}
