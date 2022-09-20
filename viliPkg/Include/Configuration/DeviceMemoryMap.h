#ifndef _DEVICE_MEMORY_MAP_H_
#define _DEVICE_MEMORY_MAP_H_

#include <Library/ArmLib.h>

#define MAX_ARM_MEMORY_REGION_DESCRIPTOR_COUNT 74

/* Below flag is used for system memory */
#define SYSTEM_MEMORY_RESOURCE_ATTR_CAPABILITIES                               \
  EFI_RESOURCE_ATTRIBUTE_PRESENT | EFI_RESOURCE_ATTRIBUTE_INITIALIZED |        \
      EFI_RESOURCE_ATTRIBUTE_TESTED | EFI_RESOURCE_ATTRIBUTE_UNCACHEABLE |     \
      EFI_RESOURCE_ATTRIBUTE_WRITE_COMBINEABLE |                               \
      EFI_RESOURCE_ATTRIBUTE_WRITE_THROUGH_CACHEABLE |                         \
      EFI_RESOURCE_ATTRIBUTE_WRITE_BACK_CACHEABLE |                            \
      EFI_RESOURCE_ATTRIBUTE_EXECUTION_PROTECTABLE

typedef enum { NoHob, AddMem, AddDev, Mem8G, MaxMem } DeviceMemoryAddHob;

typedef struct {
  EFI_PHYSICAL_ADDRESS         Address;
  UINT64                       Length;
  EFI_RESOURCE_TYPE            ResourceType;
  EFI_RESOURCE_ATTRIBUTE_TYPE  ResourceAttribute;
  ARM_MEMORY_REGION_ATTRIBUTES ArmAttributes;
  DeviceMemoryAddHob           HobOption;
  EFI_MEMORY_TYPE              MemoryType;
} ARM_MEMORY_REGION_DESCRIPTOR_EX, *PARM_MEMORY_REGION_DESCRIPTOR_EX;

static ARM_MEMORY_REGION_DESCRIPTOR_EX gDeviceMemoryDescriptorEx[] = {
    /* Address,	  Length,     ResourceType, Resource Attribute, ARM MMU
       Attribute,                  HobOption, EFI Memory Type */

    /* DDR */

    /* Axon DMA */
    {0x80600000, 0x00100000, EFI_RESOURCE_SYSTEM_MEMORY,
     SYSTEM_MEMORY_RESOURCE_ATTR_CAPABILITIES,
     ARM_MEMORY_REGION_ATTRIBUTE_WRITE_BACK, AddMem, EfiReservedMemoryType},
    /* BOOT */
    {0x80700000, 0x00100000, EFI_RESOURCE_MEMORY_RESERVED,
     SYSTEM_MEMORY_RESOURCE_ATTR_CAPABILITIES,
     ARM_MEMORY_REGION_ATTRIBUTE_WRITE_BACK, AddMem, EfiReservedMemoryType},
    /* AOP CMD DB */
    {0x80860000, 0x00020000, EFI_RESOURCE_SYSTEM_MEMORY,
     SYSTEM_MEMORY_RESOURCE_ATTR_CAPABILITIES,
     ARM_MEMORY_REGION_ATTRIBUTE_WRITE_BACK, AddMem, EfiReservedMemoryType},
    /* XBL Log Buffer */
    {0x80884000, 0x00010000, EFI_RESOURCE_SYSTEM_MEMORY,
     SYSTEM_MEMORY_RESOURCE_ATTR_CAPABILITIES,
     ARM_MEMORY_REGION_ATTRIBUTE_WRITE_BACK, AddMem, EfiBootServicesData},
    /* SMEM */
    {0x80900000, 0x00200000, EFI_RESOURCE_MEMORY_RESERVED,
     EFI_RESOURCE_ATTRIBUTE_UNCACHEABLE,
     ARM_MEMORY_REGION_ATTRIBUTE_UNCACHED_UNBUFFERED, AddMem,
     EfiReservedMemoryType},
    /* PIL Reserved */
    {0x8BF00000, 0x0C100000, EFI_RESOURCE_SYSTEM_MEMORY,
     SYSTEM_MEMORY_RESOURCE_ATTR_CAPABILITIES,
     ARM_MEMORY_REGION_ATTRIBUTE_DEVICE, AddMem, EfiReservedMemoryType},
    /* DXE Heap */
    {0x98000000, 0x05330000, EFI_RESOURCE_SYSTEM_MEMORY,
     SYSTEM_MEMORY_RESOURCE_ATTR_CAPABILITIES,
     ARM_MEMORY_REGION_ATTRIBUTE_WRITE_BACK, AddMem, EfiConventionalMemory},
    /* FV Region */
    {0x9F800000, 0x00200000, EFI_RESOURCE_SYSTEM_MEMORY,
     SYSTEM_MEMORY_RESOURCE_ATTR_CAPABILITIES,
     ARM_MEMORY_REGION_ATTRIBUTE_WRITE_BACK, AddMem, EfiBootServicesData},
    /* ABOOT FV */
    {0x9FA00000, 0x00200000, EFI_RESOURCE_SYSTEM_MEMORY,
     SYSTEM_MEMORY_RESOURCE_ATTR_CAPABILITIES,
     ARM_MEMORY_REGION_ATTRIBUTE_WRITE_BACK, AddMem, EfiReservedMemoryType},
    /* UEFI FD */
    {0x9FC00000, 0x00300000, EFI_RESOURCE_SYSTEM_MEMORY,
     SYSTEM_MEMORY_RESOURCE_ATTR_CAPABILITIES,
     ARM_MEMORY_REGION_ATTRIBUTE_WRITE_BACK, AddMem, EfiBootServicesData},
    /* SEC Heap */
    {0x9FF00000, 0x0008C000, EFI_RESOURCE_SYSTEM_MEMORY,
     SYSTEM_MEMORY_RESOURCE_ATTR_CAPABILITIES,
     ARM_MEMORY_REGION_ATTRIBUTE_WRITE_BACK, AddMem, EfiBootServicesData},
    /* CPU Vectors */
    {0x9FF8C000, 0x00001000, EFI_RESOURCE_SYSTEM_MEMORY,
     SYSTEM_MEMORY_RESOURCE_ATTR_CAPABILITIES,
     ARM_MEMORY_REGION_ATTRIBUTE_WRITE_BACK, AddMem, EfiBootServicesData},
    /* MMU PageTables */
    {0x9FF8D000, 0x00003000, EFI_RESOURCE_SYSTEM_MEMORY,
     SYSTEM_MEMORY_RESOURCE_ATTR_CAPABILITIES,
     ARM_MEMORY_REGION_ATTRIBUTE_WRITE_BACK, AddMem, EfiBootServicesData},
    /* UEFI Stack */
    {0x9FF90000, 0x00040000, EFI_RESOURCE_SYSTEM_MEMORY,
     SYSTEM_MEMORY_RESOURCE_ATTR_CAPABILITIES,
     ARM_MEMORY_REGION_ATTRIBUTE_WRITE_BACK, AddMem, EfiBootServicesData},
    /* Log Buffer */
    {0x9FFF7000, 0x00008000, EFI_RESOURCE_SYSTEM_MEMORY,
     SYSTEM_MEMORY_RESOURCE_ATTR_CAPABILITIES,
     ARM_MEMORY_REGION_ATTRIBUTE_UNCACHED_UNBUFFERED, AddMem, EfiRuntimeServicesData},
    /* Info Blk */
    {0x9FFFF000, 0x00001000, EFI_RESOURCE_SYSTEM_MEMORY,
     SYSTEM_MEMORY_RESOURCE_ATTR_CAPABILITIES,
     ARM_MEMORY_REGION_ATTRIBUTE_UNCACHED_UNBUFFERED, AddMem, EfiRuntimeServicesData},
    /* Kernel */
    {0xA0000000, 0x10000000, EFI_RESOURCE_SYSTEM_MEMORY,
     SYSTEM_MEMORY_RESOURCE_ATTR_CAPABILITIES,
     ARM_MEMORY_REGION_ATTRIBUTE_WRITE_BACK, AddMem, EfiBootServicesCode},
    /* Guest VM */
    {0xD0000000, 0x08800000, EFI_RESOURCE_SYSTEM_MEMORY,
     SYSTEM_MEMORY_RESOURCE_ATTR_CAPABILITIES,
     ARM_MEMORY_REGION_ATTRIBUTE_WRITE_BACK, AddMem, EfiBootServicesCode},
    /* TZApps Reserved */
    {0xDA000000, 0x08800000, EFI_RESOURCE_SYSTEM_MEMORY,
     SYSTEM_MEMORY_RESOURCE_ATTR_CAPABILITIES,
     ARM_MEMORY_REGION_ATTRIBUTE_DEVICE, NoHob, EfiReservedMemoryType},
    /* DBI Dump */
    {0xE9600000, 0x00F00000, EFI_RESOURCE_MEMORY_MAPPED_IO,
     EFI_RESOURCE_ATTRIBUTE_INITIALIZED, ARM_MEMORY_REGION_ATTRIBUTE_DEVICE,
     NoHob, EfiConventionalMemory},
    /* Display Reserved */
    {0xEA600000, 0x02400000, EFI_RESOURCE_MEMORY_RESERVED,
     EFI_RESOURCE_ATTRIBUTE_WRITE_THROUGH_CACHEABLE,
     ARM_MEMORY_REGION_ATTRIBUTE_WRITE_THROUGH, AddMem, EfiReservedMemoryType},

    /* 8GiB Memory */
    {0xA0000000, 0xE0000000, EFI_RESOURCE_SYSTEM_MEMORY,
     SYSTEM_MEMORY_RESOURCE_ATTR_CAPABILITIES,
     ARM_MEMORY_REGION_ATTRIBUTE_WRITE_BACK, Mem8G, EfiConventionalMemory},
    {0x180000000, 0xFC8A0000, EFI_RESOURCE_SYSTEM_MEMORY,
     SYSTEM_MEMORY_RESOURCE_ATTR_CAPABILITIES,
     ARM_MEMORY_REGION_ATTRIBUTE_WRITE_BACK, Mem8G, EfiConventionalMemory},

    /* Other */

    /* IMEM Base */
    {0x14680000, 0x0003F000, EFI_RESOURCE_MEMORY_MAPPED_IO,
     EFI_RESOURCE_ATTRIBUTE_INITIALIZED, ARM_MEMORY_REGION_ATTRIBUTE_DEVICE,
     NoHob, EfiConventionalMemory},
    /* IMEM Cookie Base */
    {0x146BF000, 0x00001000, EFI_RESOURCE_MEMORY_MAPPED_IO,
     EFI_RESOURCE_ATTRIBUTE_INITIALIZED, ARM_MEMORY_REGION_ATTRIBUTE_DEVICE,
     AddDev, EfiConventionalMemory},

    /* Register */

    /* IPC_ROUTER_TOP */
    {0x00400000, 0x00100000, EFI_RESOURCE_MEMORY_MAPPED_IO,
     EFI_RESOURCE_ATTRIBUTE_UNCACHEABLE, ARM_MEMORY_REGION_ATTRIBUTE_DEVICE,
     AddDev, EfiMemoryMappedIO},
    /* SECURITY CONTROL */
    {0x00780000, 0x00007000, EFI_RESOURCE_MEMORY_MAPPED_IO,
     EFI_RESOURCE_ATTRIBUTE_UNCACHEABLE, ARM_MEMORY_REGION_ATTRIBUTE_DEVICE,
     AddDev, EfiMemoryMappedIO},
    /* QUP */
    {0x00800000, 0x00300000, EFI_RESOURCE_MEMORY_MAPPED_IO,
     EFI_RESOURCE_ATTRIBUTE_UNCACHEABLE, ARM_MEMORY_REGION_ATTRIBUTE_DEVICE,
     AddDev, EfiMemoryMappedIO},
    /* PRNG_CFG_PRNG */
    {0x010D0000, 0x00010000, EFI_RESOURCE_MEMORY_MAPPED_IO,
     EFI_RESOURCE_ATTRIBUTE_UNCACHEABLE, ARM_MEMORY_REGION_ATTRIBUTE_DEVICE,
     AddDev, EfiMemoryMappedIO},
    /* TCSR_TCSR_REGS */
    {0x01FC0000, 0x00030000, EFI_RESOURCE_MEMORY_MAPPED_IO,
     EFI_RESOURCE_ATTRIBUTE_UNCACHEABLE, ARM_MEMORY_REGION_ATTRIBUTE_DEVICE,
     AddDev, EfiMemoryMappedIO},
    /* PERIPH_SS */
    {0x08800000, 0x00200000, EFI_RESOURCE_MEMORY_MAPPED_IO,
     EFI_RESOURCE_ATTRIBUTE_UNCACHEABLE, ARM_MEMORY_REGION_ATTRIBUTE_DEVICE,
     AddDev, EfiMemoryMappedIO},
    /* USB */
    {0x0A600000, 0x04000000, EFI_RESOURCE_MEMORY_MAPPED_IO,
     EFI_RESOURCE_ATTRIBUTE_UNCACHEABLE, ARM_MEMORY_REGION_ATTRIBUTE_DEVICE,
     AddDev, EfiMemoryMappedIO},
    /* AOSS */
    {0x0B000000, 0x04000000, EFI_RESOURCE_MEMORY_MAPPED_IO,
     EFI_RESOURCE_ATTRIBUTE_UNCACHEABLE, ARM_MEMORY_REGION_ATTRIBUTE_DEVICE,
     AddDev, EfiMemoryMappedIO},
    /* TLMM_WEST */
    {0x0F100000, 0x00300000, EFI_RESOURCE_MEMORY_MAPPED_IO,
     EFI_RESOURCE_ATTRIBUTE_UNCACHEABLE, ARM_MEMORY_REGION_ATTRIBUTE_DEVICE,
     AddDev, EfiMemoryMappedIO},
    /* TLMM_SOUTH */
    {0x0F500000, 0x00300000, EFI_RESOURCE_MEMORY_MAPPED_IO,
     EFI_RESOURCE_ATTRIBUTE_UNCACHEABLE, ARM_MEMORY_REGION_ATTRIBUTE_DEVICE,
     AddDev, EfiMemoryMappedIO},
    /* TLMM_NORTH */
    {0x0F900000, 0x00300000, EFI_RESOURCE_MEMORY_MAPPED_IO,
     EFI_RESOURCE_ATTRIBUTE_UNCACHEABLE, ARM_MEMORY_REGION_ATTRIBUTE_DEVICE,
     AddDev, EfiMemoryMappedIO},
    /* SMMU */
    {0x15000000, 0x000D0000, EFI_RESOURCE_MEMORY_MAPPED_IO,
     EFI_RESOURCE_ATTRIBUTE_UNCACHEABLE, ARM_MEMORY_REGION_ATTRIBUTE_DEVICE,
     AddDev, EfiMemoryMappedIO},
    /* APSS_HM */
    {0x17800000, 0x00D99000, EFI_RESOURCE_MEMORY_MAPPED_IO,
     EFI_RESOURCE_ATTRIBUTE_UNCACHEABLE, ARM_MEMORY_REGION_ATTRIBUTE_DEVICE,
     AddDev, EfiMemoryMappedIO},

    /* Terminator */
    {0}
    
};

#endif
