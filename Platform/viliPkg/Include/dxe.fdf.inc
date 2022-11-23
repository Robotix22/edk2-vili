  INF MdeModulePkg/Core/Dxe/DxeMain.inf
  INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf
  INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
  INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf
  INF MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf
  INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
  INF EmbeddedPkg/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
  INF MdeModulePkg/Universal/ResetSystemRuntimeDxe/ResetSystemRuntimeDxe.inf
  INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
  INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
  INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
  INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf

  INF EmbeddedPkg/SimpleTextInOutSerial/SimpleTextInOutSerial.inf
  INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf

  FILE DRIVER = cccb0c28-4b24-11d5-9a5a-0090273fc14d {
    SECTION PE32 = Platform/viliPkg/Binaries/GraphicsConsoleDxe/GraphicsConsoleDxe.efi
    SECTION UI = "GraphicsConsoleDxe"
  }

  INF MdeModulePkg/Universal/Console/TerminalDxe/TerminalDxe.inf
  
  INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf

  FILE DRIVER = 49EA041E-6752-42CA-B0B1-7344FE2546B7 {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/ArmTimerDxe/ArmTimerDxe.depex
    SECTION PE32 = Platform/viliPkg/Binaries/ArmTimerDxe/ArmTimerDxe.efi
    SECTION UI = "ArmTimerDxe"
  }
  
  INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf

  FILE DRIVER = ce044919-3000-4998-82af-ddb4e17c6b66 {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/AdapterInformationDxe/AdapterInformationDxe.depex
    SECTION PE32 = Platform/viliPkg/Binaries/AdapterInformationDxe/AdapterInformationDxe.efi
    SECTION UI = "AdapterInformationDxe"
  }

  FILE DRIVER = 5bd181db-0487-4f1a-ae73-820e165611b3 {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/ButtonsDxe/ButtonsDxe.depex
    SECTION PE32 = Platform/viliPkg/Binaries/ButtonsDxe/ButtonsDxe.patched.efi
    SECTION UI = "ButtonsDxe"
  }

  FILE DRIVER = 2E3042F3-2BB9-463F-8866-56D75B7C4AB0 {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/ChargerExDxe/ChargerExDxe.depex
    SECTION PE32 = Platform/viliPkg/Binaries/ChargerExDxe/ChargerExDxe.efi
    SECTION UI = "ChargerExDxe"
  }

  FILE DRIVER = 10e193df-9966-44e7-b17c-59dd831e20fc {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/ChipInfo/ChipInfo.depex
    SECTION PE32 = Platform/viliPkg/Binaries/ChipInfo/ChipInfo.efi
    SECTION UI = "ChipInfo"
  }

  FILE DRIVER = 4DB5DEA6-5302-4D1A-8A82-677A683B0D29 {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/ClockDxe/ClockDxe.depex
    SECTION PE32 = Platform/viliPkg/Binaries/ClockDxe/ClockDxe.patched.efi
    SECTION UI = "ClockDxe"
  }

  FILE DRIVER = ABA01FF8-2CCB-4E12-8B2E-CD3F4A742993 {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/CmdDbDxe/CmdDbDxe.depex
    SECTION PE32 = Platform/viliPkg/Binaries/CmdDbDxe/CmdDbDxe.efi
    SECTION UI = "CmdDbDxe"
  }

  FILE DRIVER = 8E9BD160-B184-11DF-94E2-0800200C9A66 {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/DALSys/DALSys.depex
    SECTION PE32 = Platform/viliPkg/Binaries/DALSys/DALSys.efi
    SECTION UI = "DALSys"
  }

  FILE DRIVER = 8681cc5a-0df6-441e-b4b8-e915c538f067 {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/DALTLMM/DALTLMM.depex
    SECTION PE32 = Platform/viliPkg/Binaries/DALTLMM/DALTLMM.efi
    SECTION UI = "DALTLMM"
  }

  FILE DRIVER = 7DB0793A-4402-4BE1-906E-D0FABAD2707E {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/DDRInfoDxe/DDRInfoDxe.depex
    SECTION PE32 = Platform/viliPkg/Binaries/DDRInfoDxe/DDRInfoDxe.efi
    SECTION UI = "DDRInfoDxe"
  }

  FILE DRIVER = 1C04F529-0612-4319-9315-B2E75C16810A {
    SECTION PE32 = Platform/viliPkg/Binaries/FeatureEnablerDxe/FeatureEnablerDxe.patched.efi
    SECTION UI = "FeatureEnablerDxe"
  }

  FILE DRIVER = ed15ffd5-bc96-4107-9118-95366600188e {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/FontDxe/FontDxe.depex
    SECTION PE32 = Platform/viliPkg/Binaries/FontDxe/FontDxe.efi
    SECTION UI = "FontDxe"
  }

  FILE DRIVER = E2534A24-1D9A-4A54-AAEC-BE8836D0F45D {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/FvDxe/FvDxe.depex
    SECTION PE32 = Platform/viliPkg/Binaries/FvDxe/FvDxe.efi
    SECTION UI = "FvDxe"
  }

  FILE DRIVER = 7942a7eb-b7d5-4e2e-b908-831e4de55b58 {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/GlinkDxe/GlinkDxe.depex
    SECTION PE32 = Platform/viliPkg/Binaries/GlinkDxe/GlinkDxe.efi
    SECTION UI = "GlinkDxe"
  }

  FILE DRIVER = 569ea0de-b557-4043-84cf-01103fe516e5 {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/GpiDxe/GpiDxe.depex
    SECTION PE32 = Platform/viliPkg/Binaries/GpiDxe/GpiDxe.efi
    SECTION UI = "GpiDxe"
  }

  FILE DRIVER = 9A00771F-36D4-4DD5-8916-C48ED9B16B86 {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/HALIOMMU/HALIOMMU.depex
    SECTION PE32 = Platform/viliPkg/Binaries/HALIOMMU/HALIOMMU.efi
    SECTION UI = "HALIOMMU"
  }

  FILE DRIVER = af9763a2-033b-4109-8e17-56a98d380c92 {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/HWIODxeDriver/HWIODxeDriver.depex
    SECTION PE32 = Platform/viliPkg/Binaries/HWIODxeDriver/HWIODxeDriver.efi
    SECTION UI = "HWIODxeDriver"
  }

  FILE DRIVER = 5824f9de-17d2-4b1f-a5fe-5eb77fa53093 {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/ICBDxe/ICBDxe.depex
    SECTION PE32 = Platform/viliPkg/Binaries/ICBDxe/ICBDxe.efi
    SECTION UI = "ICBDxe"
  }

  FILE DRIVER = 42031F68-1F0B-429B-93F1-0EB0CF89DDBF {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/IPCCDxe/IPCCDxe.depex
    SECTION PE32 = Platform/viliPkg/Binaries/IPCCDxe/IPCCDxe.efi
    SECTION UI = "IPCCDxe"
  }

  FILE DRIVER = 04DE8591-D2B3-4077-BBBE-B12070094EB6 {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/I2C/I2C.depex
    SECTION PE32 = Platform/viliPkg/Binaries/I2C/I2C.efi
    SECTION UI = "I2C"
  }

  FILE DRIVER = 2A0ECDCE-01AE-446E-9FFD-C4217DE0340F {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/MinidumpTADxe/MinidumpTADxe.depex
    SECTION PE32 = Platform/viliPkg/Binaries/MinidumpTADxe/MinidumpTADxe.efi
    SECTION UI = "MinidumpTADxe"
  }

  FILE DRIVER = CB29F4D1-7F37-4692-A416-93E82E219711 {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/NpaDxe/NpaDxe.depex
    SECTION PE32 = Platform/viliPkg/Binaries/NpaDxe/NpaDxe.efi
    SECTION UI = "NpaDxe"
  }
  
  FILE DRIVER = 5246dcd6-1968-4bc6-b50e-620a0b629dc3 {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/OSConfigDxe/OSConfigDxe.depex
    SECTION PE32 = Platform/viliPkg/Binaries/OSConfigDxe/OSConfigDxe.efi
    SECTION UI = "OSConfigDxe"
  }
       
  FILE DRIVER = 4A568B8A-4D9D-4984-9C75-CEE33698E451 {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/ParserDxe/ParserDxe.depex
    SECTION PE32 = Platform/viliPkg/Binaries/ParserDxe/ParserDxe.efi
    SECTION UI = "ParserDxe"
  }

  FILE DRIVER = c62f4b20-681e-11df-8f0d-0002a5d5c51b {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/PciHostBridge/PciHostBridge.depex
    SECTION PE32 = Platform/viliPkg/Binaries/PciHostBridge/PciHostBridge.patched.efi
    SECTION UI = "PciHostBridge"
  }

  FILE DRIVER = 1d317734-4083-47c6-83ea-e3a42f2a6bff {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/PILDxe/PILDxe.depex
    SECTION PE32 = Platform/viliPkg/Binaries/PILDxe/PILDxe.efi
    SECTION UI = "PILDxe"
  }

  FILE DRIVER = 8CF9C920-D5E6-4DAC-BEF9-6E6A4EEC7ADD {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/PILProxyDxe/PILProxyDxe.depex
    SECTION PE32 = Platform/viliPkg/Binaries/PILProxyDxe/PILProxyDxe.efi
    SECTION UI = "PILProxyDxe"
  }

  FILE DRIVER = B105211B-BBBD-4ADD-A3B0-D1CF4A52154C {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/PlatformInfoDxeDriver/PlatformInfoDxeDriver.depex
    SECTION PE32 = Platform/viliPkg/Binaries/PlatformInfoDxeDriver/PlatformInfoDxeDriver.efi
    SECTION UI = "PlatformInfoDxeDriver"
  }

  FILE DRIVER = 6d4a9cf7-cc0c-42b0-aa89-f6a6a8d99273 {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/PmicGlinkDxe/PmicGlinkDxe.depex
    SECTION PE32 = Platform/viliPkg/Binaries/PmicGlinkDxe/PmicGlinkDxe.efi
    SECTION UI = "PmicGlinkDxe"
  }

  FILE DRIVER = 5776232e-082d-4b75-9a0e-fe1d13f7a5d9 {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/PmicDxe/PmicDxe.depex
    SECTION PE32 = Platform/viliPkg/Binaries/PmicDxe/PmicDxe.efi
    SECTION UI = "PmicDxe"
  }

  FILE DRIVER = 0A8D6360-7EF3-11EA-B20F-B3A524584400 {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/ProjectInfoDxeDriver/ProjectInfoDxeDriver.depex
    SECTION PE32 = Platform/viliPkg/Binaries/ProjectInfoDxeDriver/ProjectInfoDxeDriver.efi
    SECTION UI = "ProjectInfoDxeDriver"
  }

  FILE DRIVER = 0401b830-bff9-44a2-a5f6-95734a33c017 {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/PwrUtilsDxe/PwrUtilsDxe.depex
    SECTION PE32 = Platform/viliPkg/Binaries/PwrUtilsDxe/PwrUtilsDxe.efi
    SECTION UI = "PwrUtilsDxe"
  }

  FILE APPLICATION = EEE9C2B1-16CA-4F34-87EA-2E6D1E160CC4 {
    SECTION UI = "QcomChargerApp"
    SECTION PE32 = Platform/viliPkg/Binaries/QcomChargerApp/QcomChargerApp.efi
  }

  FILE DRIVER = 4BCE7F36-428E-4393-99E3-7E0844404DBA {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/QcomChargerDxeLA/QcomChargerDxeLA.depex
    SECTION PE32 = Platform/viliPkg/Binaries/QcomChargerDxeLA/QcomChargerDxeLA.efi
    SECTION UI = "QcomChargerDxeLA"
  }

  FILE DRIVER = 040e1e61-0afb-411b-9ec9-00f3fc59cc13 {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/QcomWDogDxe/QcomWDogDxe.depex
    SECTION PE32 = Platform/viliPkg/Binaries/QcomWDogDxe/QcomWDogDxe.patched.efi
    SECTION UI = "QcomWDogDxe"
  }

  FILE DRIVER = CB29F4D1-7F37-4692-A416-93E82E219766 {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/RpmhDxe/RpmhDxe.depex
    SECTION PE32 = Platform/viliPkg/Binaries/RpmhDxe/RpmhDxe.efi
    SECTION UI = "RpmhDxe"
  }

  FILE DRIVER = 4b4973ee-401b-4f36-a6a9-533dfccdfc33 {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/ScmDxeLA/ScmDxeLA.depex
    SECTION PE32 = Platform/viliPkg/Binaries/ScmDxeLA/ScmDxeLA.efi
    SECTION UI = "ScmDxeLA"
  }

  FILE DRIVER = f10f76db-42c1-533f-34a8-69be24653110 {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/SdccDxe/SdccDxe.depex
    SECTION PE32 = Platform/viliPkg/Binaries/SdccDxe/SdccDxe.efi
    SECTION UI = "SdccDxe"
  }

  FILE DRIVER = 8430c46d-ab1c-4f82-896b-33e156931fb3 {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/ShmBridgeDxeLA/ShmBridgeDxeLA.depex
    SECTION PE32 = Platform/viliPkg/Binaries/ShmBridgeDxeLA/ShmBridgeDxeLA.efi
    SECTION UI = "ShmBridgeDxeLA"
  }

  FILE DRIVER = f541d663-4a48-40aa-aabf-ff158ccae34c {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/SmemDxe/SmemDxe.depex
    SECTION PE32 = Platform/viliPkg/Binaries/SmemDxe/SmemDxe.efi
    SECTION UI = "SmemDxe"
  }

  FILE DRIVER = 7A32BD23-F735-4F57-AA1A-447D2FE3BE0D {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/SPI/SPI.depex
    SECTION PE32 = Platform/viliPkg/Binaries/SPI/SPI.efi
    SECTION UI = "SPI"
  }

  FILE DRIVER = 2a7b4bef-80cd-49e1-b473-374ba4d673fc {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/SPMI/SPMI.depex
    SECTION PE32 = Platform/viliPkg/Binaries/SPMI/SPMI.efi
    SECTION UI = "SPMI"
  }

  FILE DRIVER = 5D787B6C-6254-43F5-A7A8-CB25329CF97E {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/SPSSDxe/SPSSDxe.depex
    SECTION PE32 = Platform/viliPkg/Binaries/SPSSDxe/SPSSDxe.efi
    SECTION UI = "SPSSDxe"
  }

  FILE DRIVER = f09ad92e-485c-9cdb-3e05-3385c38f94cc {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/TsensDxe/TsensDxe.depex
    SECTION PE32 = Platform/viliPkg/Binaries/TsensDxe/TsensDxe.efi
    SECTION UI = "TsensDxe"
  }

  FILE DRIVER = cf6dfc66-14ab-4e13-84db-9c02912d1404 {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/TzDxeLA/TzDxeLA.depex
    SECTION PE32 = Platform/viliPkg/Binaries/TzDxeLA/TzDxeLA.efi
    SECTION UI = "TzDxeLA"
  }

  FILE DRIVER = 0d35cd8e-97ea-4f9a-96af-0f0d89f76567 {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/UFSDxe/UFSDxe.depex
    SECTION PE32 = Platform/viliPkg/Binaries/UFSDxe/UFSDxe.patched.efi
    SECTION UI = "UFSDxe"
  }

  FILE DRIVER = E43128A8-8692-42B6-8AFA-676158578D18 {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/ULogDxe/ULogDxe.depex
    SECTION PE32 = Platform/viliPkg/Binaries/ULogDxe/ULogDxe.efi
    SECTION UI = "ULogDxe"
  }

  FILE DRIVER = 8bd3b475-401a-4b0b-9315-edee61a1eae5 {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/VcsDxe/VcsDxe.depex
    SECTION PE32 = Platform/viliPkg/Binaries/VcsDxe/VcsDxe.efi
    SECTION UI = "VcsDxe"
  }

  FILE DRIVER = beb12bee-f6e1-11e1-9fb8-6c626de4aeb1 {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/XhciPciEmulation/XhciPciEmulation.depex
    SECTION PE32 = Platform/viliPkg/Binaries/XhciPciEmulation/XhciPciEmulation.efi
    SECTION UI = "XhciPciEmulation"
  }

  FILE DRIVER = B7F50E91-A759-412C-ADE4-DCD03E7F7C28 {
    SECTION PE32 = Platform/viliPkg/Binaries/XhciDxe/XhciDxe.efi
    SECTION UI = "XhciDxe"
  }

  FILE DRIVER = 240612B7-A063-11D4-9A3A-0090273FC14D {
    SECTION PE32 = Platform/viliPkg/Binaries/UsbBusDxe/UsbBusDxe.efi
    SECTION UI = "UsbBusDxe"
  }

  FILE DRIVER = 9FB4B4A7-42C0-4BCD-8540-9BCC6711F83E {
    SECTION PE32 = Platform/viliPkg/Binaries/UsbMassStorageDxe/UsbMassStorageDxe.efi
    SECTION UI = "UsbMassStorageDxe"
  }

  FILE DRIVER = 11faed4c-b21f-4d88-8e48-c4c28a1e50df {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/UsbPwrCtrlDxe/UsbPwrCtrlDxe.depex
    SECTION PE32 = Platform/viliPkg/Binaries/UsbPwrCtrlDxe/UsbPwrCtrlDxe.efi
    SECTION UI = "UsbPwrCtrlDxe"
  }

  FILE DRIVER = 94f8a6a7-dc34-4101-88c1-99179cceae83 {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/UsbfnDwc3Dxe/UsbfnDwc3Dxe.depex
    SECTION PE32 = Platform/viliPkg/Binaries/UsbfnDwc3Dxe/UsbfnDwc3Dxe.efi
    SECTION UI = "UsbfnDwc3Dxe"
  }

  FILE DRIVER = 2D2E62CF-9ECF-43B7-8219-94E7FC713DFE {
    SECTION PE32 = Platform/viliPkg/Binaries/UsbKbDxe/UsbKbDxe.efi
    SECTION UI = "UsbKbDxe"
  }

  FILE DRIVER = cd823a4d-7dec-4531-ae5d-4134fa4127b8 {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/UsbConfigDxe/UsbConfigDxe.depex
    SECTION PE32 = Platform/viliPkg/Binaries/UsbConfigDxe/UsbConfigDxe.patched.efi
    SECTION UI = "UsbConfigDxe"
  }

  FILE DRIVER = 0A134F0E-075E-40B3-9C63-3B3906804663 {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/UsbInitDxe/UsbInitDxe.depex
    SECTION PE32 = Platform/viliPkg/Binaries/UsbInitDxe/UsbInitDxe.efi
    SECTION UI = "UsbInitDxe"
  }

  FILE DRIVER = 3299a266-15f0-4346-8318-716336736d3e {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/UsbDeviceDxe/UsbDeviceDxe.depex
    SECTION PE32 = Platform/viliPkg/Binaries/UsbDeviceDxe/UsbDeviceDxe.efi
    SECTION UI = "UsbDeviceDxe"
  }

  FILE DRIVER = 5AF77F10-90DF-4E7E-8325-A17EC09D5443 {
    SECTION DXE_DEPEX = Platform/viliPkg/Binaries/UsbMsdDxe/UsbMsdDxe.depex
    SECTION PE32 = Platform/viliPkg/Binaries/UsbMsdDxe/UsbMsdDxe.efi
    SECTION UI = "UsbMsdDxe"
  }
