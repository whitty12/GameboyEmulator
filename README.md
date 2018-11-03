# GameboyEmulator
(Work in Progress)

# Description
This emulator is a Gameboy Emulator written in C. Gameboy.h is a header that defines all cpu usage values such as screen display, registers, stack management, and memory allocation. Cartridge.h is a header for the Cartridge.c file that implements all of the aspects of Gameboy cartridges. Currently, Cartridge.c handles memory allocation specific to the Gameboy cartridge.

# Implementation

Gameboy memory is represented by 8K memory. The screen has a buffer of 256 x 256 pixels, but it can only display 160x 140 at any given time. The Gameboy CPU closely represents the Intel 8080 and the Z80, with several instructions either added or removed. Within each register, certain spaces are reserved for the accumulator, carry, and various register flags. There are 16 main registers. 

Due to restrictions on free memory access in programming languages such as Java, Python, Rust, ect., this emulator is written in C. C allows free usage of pointers, allowing for easier implementation of memory representations of the Gameboy system. Further, C++ was not used due to Object-Oriented Programming. While Object-Oriented Programming simplifies some aspects of programming and allows for class creation, C already has many open-source libraries that can offset this drawback. Use of Object-Oriented Programming can lead to code obscurity in very basic, hardware-level implementations. 

Graphics will be implemented with an open-source graphics library.

# Installation

No installation available at this time. At that time, this software shall be made open-source. If, at that point, you would like to make a suggestion or report a bug, please let me know.


# References

Many references were used in the creation of this emulator:
http://www.devrs.com/gb/files/opcodes.html

Intel 8080 Instructions:
http://pastraiser.com/cpu/i8080/i8080_opcodes.html

CPU Manual:
http://marc.rawer.de/Gameboy/Docs/GBCPUman.pdf

Inspirations from:
https://github.com/drhelius/Gearboy
