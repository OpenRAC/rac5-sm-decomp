/* LEVEL_09:0x12F638 -- placement copy of LEVEL_01_136708.c: releases the handle held in the nested record and clears it. */
extern void func_07D5B8(char *record);

void func_12F638(char *record)
{
    char *nested = *(char **)(record + 0x58);
    char *value = *(char **)(nested + 0x54);

    if (value != 0) {
        func_07D5B8(value);
        *(char **)(nested + 0x54) = 0;
    }
}
