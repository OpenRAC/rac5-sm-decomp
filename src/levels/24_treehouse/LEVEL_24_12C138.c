/* LEVEL_24:0x12C138 -- placement copy of LEVEL_01_136708.c: releases the handle held in the nested record and clears it. */
extern void func_07B218(char *record);

void func_12C138(char *record)
{
    char *nested = *(char **)(record + 0x58);
    char *value = *(char **)(nested + 0x54);

    if (value != 0) {
        func_07B218(value);
        *(char **)(nested + 0x54) = 0;
    }
}
