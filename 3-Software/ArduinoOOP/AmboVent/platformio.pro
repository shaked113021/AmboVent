
win32 {
    HOMEDIR += $$(USERPROFILE)
}
else {
    HOMEDIR += $$(HOME)
}

INCLUDEPATH += "$${HOMEDIR}/Git/AmboVent/3-Software/ArduinoOOP/AmboVent/include"
INCLUDEPATH += "$${HOMEDIR}/Git/AmboVent/3-Software/ArduinoOOP/AmboVent/src"
INCLUDEPATH += "$${HOMEDIR}/.platformio/packages/framework-arduino-avr/cores/arduino"
INCLUDEPATH += "$${HOMEDIR}/.platformio/packages/framework-arduino-avr/variants/eightanaloginputs"
INCLUDEPATH += "$${HOMEDIR}/Git/AmboVent/3-Software/ArduinoOOP/AmboVent/lib/Arduino-LiquidCrystal-I2C-library-master"
INCLUDEPATH += "$${HOMEDIR}/Git/AmboVent/3-Software/ArduinoOOP/AmboVent/lib/ArduinoUniqueID"
INCLUDEPATH += "$${HOMEDIR}/Git/AmboVent/3-Software/ArduinoOOP/AmboVent/lib/Servo/src"
INCLUDEPATH += "$${HOMEDIR}/Git/AmboVent/3-Software/ArduinoOOP/AmboVent/lib/SparkFun_MS5803-14BA_Breakout_Arduino_Library-master/src"
INCLUDEPATH += "$${HOMEDIR}/.platformio/packages/framework-arduino-avr/libraries/EEPROM/src"
INCLUDEPATH += "$${HOMEDIR}/.platformio/packages/framework-arduino-avr/libraries/HID/src"
INCLUDEPATH += "$${HOMEDIR}/.platformio/packages/framework-arduino-avr/libraries/SPI/src"
INCLUDEPATH += "$${HOMEDIR}/.platformio/packages/framework-arduino-avr/libraries/SoftwareSerial/src"
INCLUDEPATH += "$${HOMEDIR}/.platformio/packages/framework-arduino-avr/libraries/Wire/src"
INCLUDEPATH += "$${HOMEDIR}/.platformio/packages/toolchain-atmelavr/lib/gcc/avr/7.3.0/include"
INCLUDEPATH += "$${HOMEDIR}/.platformio/packages/toolchain-atmelavr/lib/gcc/avr/7.3.0/include-fixed"
INCLUDEPATH += "$${HOMEDIR}/.platformio/packages/toolchain-atmelavr/avr/include"

DEFINES += "PLATFORMIO=50101"
DEFINES += "ARDUINO_AVR_NANO"
DEFINES += "F_CPU=16000000L"
DEFINES += "ARDUINO_ARCH_AVR"
DEFINES += "ARDUINO=10808"
DEFINES += "__AVR_ATmega328P__"

OTHER_FILES += platformio.ini

SOURCES += src/main.cpp \
    src/LED/RGBLED.cpp
SOURCES += src/PID/PIDController.cpp
SOURCES += src/LED/RegularLED.cpp
SOURCES += src/ambovent/units/README.md
SOURCES += src/ambovent/units/Percent.cpp
SOURCES += src/ambovent/units/Pascal.cpp

HEADERS += include/PID/PIDController.h \
    include/LED/LED.h \
    include/LED/LEDInterface.h \
    include/LED/RGBLED.h \
    include/LED/RGBLEDColor.h
HEADERS += include/LED/RegularLED.h
HEADERS += include/ambovent/units/README.md
HEADERS += include/ambovent/units/Percent.h
HEADERS += include/ambovent/units/Pascal.h
HEADERS += include/ambovent/units/units.h

CONFIG += c++11
