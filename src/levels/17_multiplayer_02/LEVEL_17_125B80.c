/* LEVEL_17:0x125B80 -- placement copy of LEVEL_01_136708.c: releases the handle held in the nested record and clears it. */
extern void func_073DB0(char *record);

void func_125B80(char *record)
{
    char *nested = *(char **)(record + 0x58);
    char *value = *(char **)(nested + 0x54);

    if (value != 0) {
        func_073DB0(value);
        *(char **)(nested + 0x54) = 0;
    }
}
