
nothing: default

include $(BUILD_DIR)/make.common

export BUILD_MODSW_BEE_PREINSTALL
export BUILD_BRCM_BEE_AIRIQ_PREINSTALL
export BUILD_BRCM_BEE_CWMPC_PREINSTALL
export BUILD_BRCM_BEE_DAD_PREINSTALL
export BUILD_BRCM_BEE_DMACTL_PREINSTALL
export BUILD_BRCM_BEE_DSLDIAGD_PREINSTALL
export BUILD_BRCM_BEE_IPERFV2_PREINSTALL
export BUILD_BRCM_BEE_SAMBA_PREINSTALL
export BUILD_BRCM_BEE_SPTESTSUITE_PREINSTALL
export BUILD_BRCM_BEE_TR69C_PREINSTALL

export BUILD_BRCM_HOSTEE_AIRIQ_PREINSTALL
export BUILD_BRCM_HOSTEE_CWMPC_PREINSTALL
export BUILD_BRCM_HOSTEE_DAD_PREINSTALL
export BUILD_BRCM_HOSTEE_DMACTL_PREINSTALL
export BUILD_BRCM_HOSTEE_DSLDIAGD_PREINSTALL
export BUILD_BRCM_HOSTEE_IPERFV2_PREINSTALL
export BUILD_BRCM_HOSTEE_SAMBA_PREINSTALL
export BUILD_BRCM_HOSTEE_SPTESTSUITE_PREINSTALL
export BUILD_BRCM_HOSTEE_TR69C_PREINSTALL

export BUILD_MODSW_EXAMPLEEE_PREINSTALL

buildFS_BEE buildFS_EXAMPLEEE buildFS_BEEPPREINSTALL buildFS_OPENWRTEE:
		cd $(TARGETS_DIR); ./$(MAKECMDGOALS)

.PHONY: buildFS_BEE buildFS_EXAMPLEEE buildFS_BEEPPREINSTALL buildFS_OPENWRTEE

