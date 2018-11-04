/*This header file contains all of the cpu and gpu specifications for the gameboy itself.*/
unsigned short opcode;
unsigned char memory[8000];
unsigned char status_register[8];
unsigned char main_registers[16];
unsigned short index_reg;
unsigned short pc;
/* The background in total is 256 pixels by 256 pixels*/
unsigned short screen_buffer[256*256];
/*The screen can only display 160 * 144 pixels at any given time*/
unsigned short screen_display[160 * 144]
unsigned short stack[16];
unsigned short stack_pointer;
bool drawFlag = True;
/*Memory map:
Interrupt Enable Register
--------------------------- FFFF
Internal RAM
--------------------------- FF80
Empty but unusable for I/O
--------------------------- FF4C
I/O ports
--------------------------- FF00
Empty but unusable for I/O
--------------------------- FEA0
Sprite Attrib Memory (OAM)
--------------------------- FE00
Echo of 8kB Internal RAM
--------------------------- E000
8kB Internal RAM
--------------------------- C000       -------------------------
8kB switchable RAM bank              /      MBC1 ROM/RAM Select
--------------------------- A000     /  ------------------------
8kB Video RAM                      /  /     RAM Bank Select
--------------------------- 8000 --/  /  -----------------------
16kB switchable ROM bank   6000 ----/  /    ROM Bank Select
--------------------------- 4000 ------/  ----------------------
16kB ROM bank #0           2000 --------/   RAM Bank enable
--------------------------- 0000 -------------------------------

* NOTE: b = bit, B = byte*/

//Function which loads the game into memory after detecting the cartridge type
public static void loadGame(char[] name);
private char*[] fetchOpCode(char opcode) {
    //TODO: Pointer probably fetched wrong (is this a retrieval from a pointer array or just retrieved via pointer)
    //TODO:Each opcode is [xx] bytes
    return registers[opcode];
}

private void decodeOpCode(opcode){
  return;
}

private void executeOpCode() {
  return;
}

private void update() {}

public void emulateCycle() {
    //fetch the opcodes for the cycle
    currOpCode = fetchOpCode(opcode);
    currOpCode = decodeOpCode(currOpCode);
    currInstruction = executeOpCode(currOpCode);

    //update the system
    update();
}
