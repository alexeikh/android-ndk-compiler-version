LOCAL_PATH := $(call my-dir)

# main
include $(CLEAR_VARS)

LOCAL_MODULE        := $(shell pwd | xargs dirname | xargs basename)
LOCAL_SRC_FILES     := $(wildcard *.cpp)

LOCAL_CFLAGS        += -std=c++14
LOCAL_CFLAGS        += -Wall

LOCAL_LDFLAGS       += -latomic

include $(BUILD_EXECUTABLE)
