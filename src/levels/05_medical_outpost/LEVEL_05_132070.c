/* LEVEL_05:0x132070 -- placement copy of LEVEL_01_136708.c: releases the handle held in the nested record and clears it. */
extern void func_07E1D8(char *record);

void func_132070(char *record)
{
    char *nested = *(char **)(record + 0x58);
    char *value = *(char **)(nested + 0x54);

    if (value != 0) {
        func_07E1D8(value);
        *(char **)(nested + 0x54) = 0;
    }
}
