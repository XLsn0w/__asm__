DEBUG = false

THEOS_DEVICE_IP = localhost
THEOS_DEVICE_PORT = 2222

ARCHS = arm64 arm64e

TARGET = iphone:latest:8.0

THEOS_MAKE_PATH = /opt/theos/makefiles

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = XLsn0wDock

XLsn0wDock_FILES = Tweak.xm

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 SpringBoard"
