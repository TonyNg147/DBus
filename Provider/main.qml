import QtQuick
Window{
    width:640
    height:480
    visible:true
    Rectangle{
        anchors.fill:parent
        color:controller.status?'yellow':'red'
        Text{
            anchors.centerIn: parent
            text:controller.status?"ON":"OFF"
            font.pixelSize: 30
            color:'white'
        }
    }
}
