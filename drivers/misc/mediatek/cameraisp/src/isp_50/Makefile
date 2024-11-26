#
# Copyright (C) 2015 MediaTek Inc.
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License version 2 as
# published by the Free Software Foundation.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
# GNU General Public License for more details.
#

ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/m4u/mt6771/
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/mmp/
# ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/cmdq/v3/
# ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/cmdq/v3/mt6771/

ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/mdp/

ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/staging/android/mtk_ion \
             -I$(DEVICE_MODULES_PATH)/drivers/staging/android/mtk_ion/mtk
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/smi/
# ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/timer/timesync/
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/cam_timesync/
ccflags-y += -I$(DEVICE_MODULES_PATH)/drivers/misc/mediatek/mmdvfs/

obj-$(CONFIG_MTK_CAMERA_ISP_RAW_SUPPORT) += camera_isp50.o
camera_isp50-objs += camera_isp.o
