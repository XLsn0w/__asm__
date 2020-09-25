include $(THEOS)/makefiles/common.mk

TWEAK_NAME = fakeWechatStep
fakeWechatStep_FILES = Tweak.xm

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 WeChat"
