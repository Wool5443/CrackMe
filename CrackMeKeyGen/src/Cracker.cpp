#include <stdio.h>
#include "Cracker.hpp"

const size_t BAD_JUMP_ADDR = 0x58;
const char NOP = 0x90;

const char* NEW_FILE = "res/LCpy.COM";

ErrorCode Crack(const char* filePath)
{
    FILE* fileRead = fopen(filePath, "rb");
    MyAssertSoft(fileRead, ERROR_BAD_FILE);

    size_t fileSize = GetFileSize(filePath);
    char* fileBuf = (char*)calloc(fileSize + 1, sizeof(*fileBuf));
    MyAssertSoft(fileBuf, ERROR_NO_MEMORY);

    fread(fileBuf, sizeof(*fileBuf), fileSize, fileRead);
    printf("size = %zu\nfile = %s\n", fileSize, fileBuf);
    fclose(fileRead);

    fileBuf[BAD_JUMP_ADDR] = NOP;
    fileBuf[BAD_JUMP_ADDR + 1] = NOP;

    FILE* fileWrite = fopen(NEW_FILE, "wb");

    fwrite(fileBuf, sizeof(*fileBuf), fileSize, fileWrite);

    fclose(fileWrite);

    return EVERYTHING_FINE;
}
