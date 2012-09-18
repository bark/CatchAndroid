LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

#FILE_LIST := $(wildcard $(LOCAL_PATH)/*.cpp)
#LOCAL_SRC_FILES := $(FILE_LIST:$(LOCAL_PATH)/%=%)
LOCAL_SRC_FILES := GLRenderer.cpp Logger.cpp  com_catch22_chainsaw_GameView.cpp
LOCAL_MODULE := catchLib
LOCAL_LDLIBS := -lGLESv1_CM -llog


include $(BUILD_SHARED_LIBRARY)