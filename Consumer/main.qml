import QtQuick 2.15

Window{
    visible: true
    width:640
    height:480
    Row{
        anchors.centerIn: parent
        spacing: 20
        Rectangle{
            width:100
            height:100
            color:'grey'
            Text{
                anchors.centerIn: parent
                text:"ON"
            }
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    consumer.changeStatus(true)
                }
            }
        }
        Rectangle{
            width:100
            height:100
            color:'grey'
            Text{
                anchors.centerIn: parent
                text:"OFF"
            }
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    consumer.changeStatus(false)
                }
            }
        }
    }
}
