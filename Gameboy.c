#import Gameboy.h;
#import Graphics.h
#import cartridge.h

int main(int argc, char **argv)
{
  //set up render system and register input callbacks
  initializeGraphics();
  initializeInput();

  //initialize the system and load the game into memory
  initialize();
  cartridge.loadGame();

  //Emulation Loop
  for(;;)
  {
    //Emulate a cycle
    emulateCycle();

    //update if drawFlag is true
    if(drawFlag){
      drawGraphics();
    }
    setKeys();
  return 0;
}
