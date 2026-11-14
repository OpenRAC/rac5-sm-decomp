/* LEVEL_07:0x139690 -- placement copy of LEVEL_01_136708.c: releases the handle held in the nested record and clears it. */
extern void func_082CA0(char *record);

void func_139690(char *record)
{
    char *nested = *(char **)(record + 0x58);
    char *value = *(char **)(nested + 0x54);

    if (value != 0) {
        func_082CA0(value);
        *(char **)(nested + 0x54) = 0;
    }
}
