#
# Makefile for the Novatek NT36xxx touchscreen driver.
#

ccflags-$(CONFIG_DRM_MEDIATEK_V2)       += -I$(DEVICE_MODULES_PATH)/drivers/gpu/drm/mediatek/mediatek_v2/

obj-$(CONFIG_TOUCHSCREEN_NT36532_SPI) += nvt_36532.o
nvt_36532-y := \
				nt36xxx.o \
				nt36xxx_fw_update.o \
				nt36xxx_ext_proc.o
