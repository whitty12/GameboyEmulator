# GameboyEmulator
(Work in Progress)

# Description
This emulator is a Gameboy Emulator written in C. Gameboy.h is a header that defines all cpu usage values such as screen display, registers, stack management, and memory allocation. Cartridge.h is a header for the Cartridge.c file that implements all of the aspects of Gameboy cartridges. Currently, Cartridge.c handles memory allocation specific to the Gameboy cartridge.

# Implementation

Gameboy memory is represented by 8K memory. The screen has a buffer of 256 x 256 pixels, but it can only display 160x 140 at any given time. The Gameboy CPU closely represents the Intel 8080 and the Z80, with several instructions either added or removed. Within each register, certain spaces are reserved for the accumulator, car 
