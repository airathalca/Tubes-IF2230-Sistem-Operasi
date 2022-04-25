// Kernel header

#include "std_lib.h"
#include "filesystem.h"

extern void putInMemory(int segment, int address, char character);
extern int interrupt(int int_number, int AX, int BX, int CX, int DX);
void makeInterrupt21();
void handleInterrupt21(int AX, int BX, int CX, int DX);
void fillKernelMap();

void printString(char *string);
void printHexa(char n);

void readString(char *string);
void clearScreen();
void welcome();

void writeSector(byte *buffer, int sector_number);
void readSector(byte *buffer, int sector_number);

void shell();