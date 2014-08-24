adb kill-server
adb tcpip 5555
adb connect 192.168.1.101
adb shell am force-stop org.nxtos.cw
adb shell am start -a android.intent.action.DELETE -d package:org.nxtos.cw
adb install d:\settings\Desktop\ConnectedWorlds-debug.apk
adb shell am start -n org.nxtos/org.nxtos.cw.MainActivity
pause
