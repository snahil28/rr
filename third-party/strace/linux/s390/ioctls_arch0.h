/* Generated by ioctls_gen.sh from definitions found in $linux/arch/s390/include/ tree. */
{ "asm/chsc.h", "CHSC_INFO_CCL", _IOC_READ|_IOC_WRITE, 0x6386, 0x1014 },
{ "asm/chsc.h", "CHSC_INFO_CHANNEL_PATH", _IOC_READ|_IOC_WRITE, 0x6382, 0x100c },
{ "asm/chsc.h", "CHSC_INFO_CI", _IOC_READ|_IOC_WRITE, 0x6385, 0x100c },
{ "asm/chsc.h", "CHSC_INFO_CPD", _IOC_READ|_IOC_WRITE, 0x6387, 0x1014 },
{ "asm/chsc.h", "CHSC_INFO_CU", _IOC_READ|_IOC_WRITE, 0x6383, 0x100c },
{ "asm/chsc.h", "CHSC_INFO_DCAL", _IOC_READ|_IOC_WRITE, 0x6388, 0x1010 },
{ "asm/chsc.h", "CHSC_INFO_SCH_CU", _IOC_READ|_IOC_WRITE, 0x6384, 0x1008 },
{ "asm/chsc.h", "CHSC_ON_CLOSE_REMOVE", _IOC_NONE, 0x638b, 0x00 },
{ "asm/chsc.h", "CHSC_ON_CLOSE_SET", _IOC_READ|_IOC_WRITE, 0x638a, 0x1000 },
{ "asm/chsc.h", "CHSC_START", _IOC_READ|_IOC_WRITE, 0x6381, 0x1000 },
{ "asm/chsc.h", "CHSC_START_SYNC", _IOC_READ|_IOC_WRITE, 0x6389, 0x1000 },
{ "asm/clp.h", "CLP_SYNC", _IOC_READ|_IOC_WRITE, 0x63c1, 0x10 },
{ "asm/cmb.h", "BIODASDCMFDISABLE", _IOC_NONE, 0x4421, 0x00 },
{ "asm/cmb.h", "BIODASDCMFENABLE", _IOC_NONE, 0x4420, 0x00 },
{ "asm/cmb.h", "BIODASDREADALLCMB", _IOC_READ|_IOC_WRITE, 0x4421, 0x58 },
{ "asm/dasd.h", "BIODASDABORTIO", _IOC_NONE, 0x44f0, 0x00 },
{ "asm/dasd.h", "BIODASDALLOWIO", _IOC_NONE, 0x44f1, 0x00 },
{ "asm/dasd.h", "BIODASDCHECKFMT", _IOC_READ|_IOC_WRITE, 0x4402, 0x28 },
{ "asm/dasd.h", "BIODASDDISABLE", _IOC_NONE, 0x4400, 0x00 },
{ "asm/dasd.h", "BIODASDENABLE", _IOC_NONE, 0x4401, 0x00 },
{ "asm/dasd.h", "BIODASDFMT", _IOC_WRITE, 0x4401, 0x10 },
{ "asm/dasd.h", "BIODASDGATTR", _IOC_READ, 0x4405, 0x20 },
{ "asm/dasd.h", "BIODASDINFO", _IOC_READ, 0x4401, 0x178 },
{ "asm/dasd.h", "BIODASDINFO2", _IOC_READ, 0x4403, 0x1a0 },
{ "asm/dasd.h", "BIODASDPRRD", _IOC_READ, 0x4402, 0x408 },
{ "asm/dasd.h", "BIODASDPRRST", _IOC_NONE, 0x4405, 0x00 },
{ "asm/dasd.h", "BIODASDPSRD", _IOC_READ, 0x4404, 0xc0 },
{ "asm/dasd.h", "BIODASDQUIESCE", _IOC_NONE, 0x4406, 0x00 },
{ "asm/dasd.h", "BIODASDRESUME", _IOC_NONE, 0x4407, 0x00 },
{ "asm/dasd.h", "BIODASDRLSE", _IOC_NONE, 0x4403, 0x00 },
{ "asm/dasd.h", "BIODASDRSRV", _IOC_NONE, 0x4402, 0x00 },
{ "asm/dasd.h", "BIODASDSATTR", _IOC_WRITE, 0x4402, 0x20 },
{ "asm/dasd.h", "BIODASDSLCK", _IOC_NONE, 0x4404, 0x00 },
{ "asm/dasd.h", "BIODASDSNID", _IOC_READ|_IOC_WRITE, 0x4401, 0x0d },
{ "asm/dasd.h", "BIODASDSYMMIO", _IOC_READ|_IOC_WRITE, 0x44f0, 0x20 },
{ "asm/dasd.h", "DASDAPIVER", _IOC_READ, 0x4400, 0x04 },
{ "asm/hypfs.h", "HYPFS_DIAG304", _IOC_READ|_IOC_WRITE, 0x1020, 0x18 },
{ "asm/ioctls.h", "FIOQSIZE", 0, 0x545E, 0 },
{ "asm/pkey.h", "PKEY_CLR2PROTK", _IOC_READ|_IOC_WRITE, 0x7004, 0x6c },
{ "asm/pkey.h", "PKEY_CLR2SECK", _IOC_READ|_IOC_WRITE, 0x7002, 0x68 },
{ "asm/pkey.h", "PKEY_FINDCARD", _IOC_READ|_IOC_WRITE, 0x7005, 0x44 },
{ "asm/pkey.h", "PKEY_GENSECK", _IOC_READ|_IOC_WRITE, 0x7001, 0x48 },
{ "asm/pkey.h", "PKEY_SEC2PROTK", _IOC_READ|_IOC_WRITE, 0x7003, 0x8c },
{ "asm/pkey.h", "PKEY_SKEY2PKEY", _IOC_READ|_IOC_WRITE, 0x7006, 0x88 },
{ "asm/pkey.h", "PKEY_VERIFYKEY", _IOC_READ|_IOC_WRITE, 0x7007, 0x4c },
{ "asm/sclp_ctl.h", "SCLP_CTL_SCCB", _IOC_READ|_IOC_WRITE, 0x1010, 0x0c },
{ "asm/tape390.h", "TAPE390_CRYPT_QUERY", _IOC_READ, 0x6403, 0x03 },
{ "asm/tape390.h", "TAPE390_CRYPT_SET", _IOC_WRITE, 0x6402, 0x03 },
{ "asm/tape390.h", "TAPE390_DISPLAY", _IOC_WRITE, 0x6401, 0x11 },
{ "asm/tape390.h", "TAPE390_KEKL_QUERY", _IOC_READ, 0x6405, 0x86 },
{ "asm/tape390.h", "TAPE390_KEKL_SET", _IOC_WRITE, 0x6404, 0x86 },
{ "asm/vmcp.h", "VMCP_GETCODE", _IOC_READ, 0x1001, 0x04 },
{ "asm/vmcp.h", "VMCP_GETSIZE", _IOC_READ, 0x1003, 0x04 },
{ "asm/vmcp.h", "VMCP_SETBUF", _IOC_WRITE, 0x1002, 0x04 },
{ "asm/zcrypt.h", "ICARSACRT", _IOC_READ|_IOC_WRITE, 0x7a06, 0x00 },
{ "asm/zcrypt.h", "ICARSAMODEXPO", _IOC_READ|_IOC_WRITE, 0x7a05, 0x00 },
{ "asm/zcrypt.h", "Z90STAT_CEX2ACOUNT", _IOC_READ, 0x7a4e, 0x04 },
{ "asm/zcrypt.h", "Z90STAT_CEX2CCOUNT", _IOC_READ, 0x7a4d, 0x04 },
{ "asm/zcrypt.h", "Z90STAT_DOMAIN_INDEX", _IOC_READ, 0x7a47, 0x04 },
{ "asm/zcrypt.h", "Z90STAT_PCICACOUNT", _IOC_READ, 0x7a41, 0x04 },
{ "asm/zcrypt.h", "Z90STAT_PCICCCOUNT", _IOC_READ, 0x7a42, 0x04 },
{ "asm/zcrypt.h", "Z90STAT_PCIXCCMCL2COUNT", _IOC_READ, 0x7a4b, 0x04 },
{ "asm/zcrypt.h", "Z90STAT_PCIXCCMCL3COUNT", _IOC_READ, 0x7a4c, 0x04 },
{ "asm/zcrypt.h", "Z90STAT_PENDINGQ_COUNT", _IOC_READ, 0x7a45, 0x04 },
{ "asm/zcrypt.h", "Z90STAT_PERDEV_REQCNT", _IOC_READ, 0x7a4a, 0x100 },
{ "asm/zcrypt.h", "Z90STAT_QDEPTH_MASK", _IOC_READ, 0x7a49, 0x40 },
{ "asm/zcrypt.h", "Z90STAT_REQUESTQ_COUNT", _IOC_READ, 0x7a44, 0x04 },
{ "asm/zcrypt.h", "Z90STAT_STATUS_MASK", _IOC_READ, 0x7a48, 0x40 },
{ "asm/zcrypt.h", "Z90STAT_TOTALCOUNT", _IOC_READ, 0x7a40, 0x04 },
{ "asm/zcrypt.h", "Z90STAT_TOTALOPEN_COUNT", _IOC_READ, 0x7a46, 0x04 },
{ "asm/zcrypt.h", "ZDEVICESTATUS", _IOC_READ|_IOC_WRITE, 0x7a4f, 0x00 },
{ "asm/zcrypt.h", "ZSECSENDCPRB", _IOC_READ|_IOC_WRITE, 0x7a81, 0x00 },
{ "asm/zcrypt.h", "ZSENDEP11CPRB", _IOC_READ|_IOC_WRITE, 0x7a04, 0x00 },
{ "linux/kvm.h", "KVM_ASSIGN_DEV_IRQ", _IOC_WRITE, 0xae70, 0x40 },
{ "linux/kvm.h", "KVM_ASSIGN_PCI_DEVICE", _IOC_READ, 0xae69, 0x40 },
{ "linux/kvm.h", "KVM_ASSIGN_SET_INTX_MASK", _IOC_WRITE, 0xaea4, 0x40 },
{ "linux/kvm.h", "KVM_ASSIGN_SET_MSIX_ENTRY", _IOC_WRITE, 0xae74, 0x10 },
{ "linux/kvm.h", "KVM_ASSIGN_SET_MSIX_NR", _IOC_WRITE, 0xae73, 0x08 },
{ "linux/kvm.h", "KVM_CHECK_EXTENSION", _IOC_NONE, 0xae03, 0x00 },
{ "linux/kvm.h", "KVM_CREATE_DEVICE", _IOC_READ|_IOC_WRITE, 0xaee0, 0x0c },
{ "linux/kvm.h", "KVM_CREATE_IRQCHIP", _IOC_NONE, 0xae60, 0x00 },
{ "linux/kvm.h", "KVM_CREATE_PIT", _IOC_NONE, 0xae64, 0x00 },
{ "linux/kvm.h", "KVM_CREATE_PIT2", _IOC_WRITE, 0xae77, 0x40 },
{ "linux/kvm.h", "KVM_CREATE_VCPU", _IOC_NONE, 0xae41, 0x00 },
{ "linux/kvm.h", "KVM_CREATE_VM", _IOC_NONE, 0xae01, 0x00 },
{ "linux/kvm.h", "KVM_DEASSIGN_DEV_IRQ", _IOC_WRITE, 0xae75, 0x40 },
{ "linux/kvm.h", "KVM_DEASSIGN_PCI_DEVICE", _IOC_WRITE, 0xae72, 0x40 },
{ "linux/kvm.h", "KVM_DIRTY_TLB", _IOC_WRITE, 0xaeaa, 0x10 },
{ "linux/kvm.h", "KVM_ENABLE_CAP", _IOC_WRITE, 0xaea3, 0x68 },
{ "linux/kvm.h", "KVM_GET_API_VERSION", _IOC_NONE, 0xae00, 0x00 },
{ "linux/kvm.h", "KVM_GET_CLOCK", _IOC_READ, 0xae7c, 0x30 },
{ "linux/kvm.h", "KVM_GET_DEVICE_ATTR", _IOC_WRITE, 0xaee2, 0x18 },
{ "linux/kvm.h", "KVM_GET_DIRTY_LOG", _IOC_WRITE, 0xae42, 0x10 },
{ "linux/kvm.h", "KVM_GET_FPU", _IOC_READ, 0xae8c, 0x88 },
{ "linux/kvm.h", "KVM_GET_IRQCHIP", _IOC_READ|_IOC_WRITE, 0xae62, 0x208 },
{ "linux/kvm.h", "KVM_GET_MP_STATE", _IOC_READ, 0xae98, 0x04 },
{ "linux/kvm.h", "KVM_GET_NR_MMU_PAGES", _IOC_NONE, 0xae45, 0x00 },
{ "linux/kvm.h", "KVM_GET_ONE_REG", _IOC_WRITE, 0xaeab, 0x10 },
{ "linux/kvm.h", "KVM_GET_REGS", _IOC_READ, 0xae81, 0x80 },
{ "linux/kvm.h", "KVM_GET_REG_LIST", _IOC_READ|_IOC_WRITE, 0xaeb0, 0x08 },
{ "linux/kvm.h", "KVM_GET_SREGS", _IOC_READ, 0xae83, 0xc0 },
{ "linux/kvm.h", "KVM_GET_TSC_KHZ", _IOC_NONE, 0xaea3, 0x00 },
{ "linux/kvm.h", "KVM_GET_VCPU_MMAP_SIZE", _IOC_NONE, 0xae04, 0x00 },
{ "linux/kvm.h", "KVM_HAS_DEVICE_ATTR", _IOC_WRITE, 0xaee3, 0x18 },
{ "linux/kvm.h", "KVM_INTERRUPT", _IOC_WRITE, 0xae86, 0x04 },
{ "linux/kvm.h", "KVM_IOEVENTFD", _IOC_WRITE, 0xae79, 0x40 },
{ "linux/kvm.h", "KVM_IRQFD", _IOC_WRITE, 0xae76, 0x20 },
{ "linux/kvm.h", "KVM_IRQ_LINE", _IOC_WRITE, 0xae61, 0x08 },
{ "linux/kvm.h", "KVM_IRQ_LINE_STATUS", _IOC_READ|_IOC_WRITE, 0xae67, 0x08 },
{ "linux/kvm.h", "KVM_KVMCLOCK_CTRL", _IOC_NONE, 0xaead, 0x00 },
{ "linux/kvm.h", "KVM_MEMORY_ENCRYPT_OP", _IOC_READ|_IOC_WRITE, 0xaeba, 0x04 },
{ "linux/kvm.h", "KVM_MEMORY_ENCRYPT_REG_REGION", _IOC_READ, 0xaebb, 0x10 },
{ "linux/kvm.h", "KVM_MEMORY_ENCRYPT_UNREG_REGION", _IOC_READ, 0xaebc, 0x10 },
{ "linux/kvm.h", "KVM_NMI", _IOC_NONE, 0xae9a, 0x00 },
{ "linux/kvm.h", "KVM_REGISTER_COALESCED_MMIO", _IOC_WRITE, 0xae67, 0x10 },
{ "linux/kvm.h", "KVM_REINJECT_CONTROL", _IOC_NONE, 0xae71, 0x00 },
{ "linux/kvm.h", "KVM_RUN", _IOC_NONE, 0xae80, 0x00 },
{ "linux/kvm.h", "KVM_S390_ENABLE_SIE", _IOC_NONE, 0xae06, 0x00 },
{ "linux/kvm.h", "KVM_S390_GET_CMMA_BITS", _IOC_READ|_IOC_WRITE, 0xaeb8, 0x20 },
{ "linux/kvm.h", "KVM_S390_GET_IRQ_STATE", _IOC_WRITE, 0xaeb6, 0x20 },
{ "linux/kvm.h", "KVM_S390_GET_SKEYS", _IOC_WRITE, 0xaeb2, 0x40 },
{ "linux/kvm.h", "KVM_S390_INITIAL_RESET", _IOC_NONE, 0xae97, 0x00 },
{ "linux/kvm.h", "KVM_S390_INTERRUPT", _IOC_WRITE, 0xae94, 0x10 },
{ "linux/kvm.h", "KVM_S390_IRQ", _IOC_WRITE, 0xaeb4, 0x48 },
{ "linux/kvm.h", "KVM_S390_MEM_OP", _IOC_WRITE, 0xaeb1, 0x40 },
{ "linux/kvm.h", "KVM_S390_SET_CMMA_BITS", _IOC_WRITE, 0xaeb9, 0x20 },
{ "linux/kvm.h", "KVM_S390_SET_INITIAL_PSW", _IOC_WRITE, 0xae96, 0x10 },
{ "linux/kvm.h", "KVM_S390_SET_IRQ_STATE", _IOC_WRITE, 0xaeb5, 0x20 },
{ "linux/kvm.h", "KVM_S390_SET_SKEYS", _IOC_WRITE, 0xaeb3, 0x40 },
{ "linux/kvm.h", "KVM_S390_STORE_STATUS", _IOC_WRITE, 0xae95, 0x04 },
{ "linux/kvm.h", "KVM_S390_UCAS_MAP", _IOC_WRITE, 0xae50, 0x18 },
{ "linux/kvm.h", "KVM_S390_UCAS_UNMAP", _IOC_WRITE, 0xae51, 0x18 },
{ "linux/kvm.h", "KVM_S390_VCPU_FAULT", _IOC_WRITE, 0xae52, 0x04 },
{ "linux/kvm.h", "KVM_SET_BOOT_CPU_ID", _IOC_NONE, 0xae78, 0x00 },
{ "linux/kvm.h", "KVM_SET_CLOCK", _IOC_WRITE, 0xae7b, 0x30 },
{ "linux/kvm.h", "KVM_SET_DEVICE_ATTR", _IOC_WRITE, 0xaee1, 0x18 },
{ "linux/kvm.h", "KVM_SET_FPU", _IOC_WRITE, 0xae8d, 0x88 },
{ "linux/kvm.h", "KVM_SET_GSI_ROUTING", _IOC_WRITE, 0xae6a, 0x08 },
{ "linux/kvm.h", "KVM_SET_GUEST_DEBUG", _IOC_WRITE, 0xae9b, 0x14 },
{ "linux/kvm.h", "KVM_SET_IDENTITY_MAP_ADDR", _IOC_WRITE, 0xae48, 0x08 },
{ "linux/kvm.h", "KVM_SET_IRQCHIP", _IOC_READ, 0xae63, 0x208 },
{ "linux/kvm.h", "KVM_SET_MEMORY_REGION", _IOC_WRITE, 0xae40, 0x18 },
{ "linux/kvm.h", "KVM_SET_MP_STATE", _IOC_WRITE, 0xae99, 0x04 },
{ "linux/kvm.h", "KVM_SET_NR_MMU_PAGES", _IOC_NONE, 0xae44, 0x00 },
{ "linux/kvm.h", "KVM_SET_ONE_REG", _IOC_WRITE, 0xaeac, 0x10 },
{ "linux/kvm.h", "KVM_SET_REGS", _IOC_WRITE, 0xae82, 0x80 },
{ "linux/kvm.h", "KVM_SET_SIGNAL_MASK", _IOC_WRITE, 0xae8b, 0x04 },
{ "linux/kvm.h", "KVM_SET_SREGS", _IOC_WRITE, 0xae84, 0xc0 },
{ "linux/kvm.h", "KVM_SET_TSC_KHZ", _IOC_NONE, 0xaea2, 0x00 },
{ "linux/kvm.h", "KVM_SET_TSS_ADDR", _IOC_NONE, 0xae47, 0x00 },
{ "linux/kvm.h", "KVM_SET_USER_MEMORY_REGION", _IOC_WRITE, 0xae46, 0x20 },
{ "linux/kvm.h", "KVM_SET_VAPIC_ADDR", _IOC_WRITE, 0xae93, 0x08 },
{ "linux/kvm.h", "KVM_SIGNAL_MSI", _IOC_WRITE, 0xaea5, 0x20 },
{ "linux/kvm.h", "KVM_SMI", _IOC_NONE, 0xaeb7, 0x00 },
{ "linux/kvm.h", "KVM_TPR_ACCESS_REPORTING", _IOC_READ|_IOC_WRITE, 0xae92, 0x28 },
{ "linux/kvm.h", "KVM_TRANSLATE", _IOC_READ|_IOC_WRITE, 0xae85, 0x18 },
{ "linux/kvm.h", "KVM_UNREGISTER_COALESCED_MMIO", _IOC_WRITE, 0xae68, 0x10 },
