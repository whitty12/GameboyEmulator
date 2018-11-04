#import Rumble.h;
#import Rom.h;
#import MBC1.h;
#import MBC2.h;
#import MBC3.h;

/*The first time of cartridge is solely ROM. It contains 32Kb of memory*/
unsigned short ROM[32000]

public static void loadGame(char[] name) {
  if (name.getCartridgeType() == "ROM") {
    loadRom();
  }
  else if(name.getCartridgeType() == "MBCI") {
    loadMBCI1();
  }
  else if(name.getCartridgeType() == "MBC2") {
    loadMBCI2();
  }
  else if(name.getCartridgeType() == "MBC3") {
    loadMBC3();
  }
  else if(name.getCartridgeType() == "MBC5") {
    loadMBC5();
  }
  else if(name.getCartridgeType() == "MBC5") {
    loadMBC5();
  }
  else if(name.getCartridgeType() == "RUMBLE") {
    loadMBC5();
  }
  else if(name.getCartridgeType() == "HuC1") {
    loadMBC5();
  }
}
public static void getCartridgeName();
piblic static void getCartridgeType();
