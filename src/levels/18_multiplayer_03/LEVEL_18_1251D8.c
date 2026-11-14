/* LEVEL_18:0x1251D8 -- placement copy of LEVEL_01_136708.c: releases the handle held in the nested record and clears it. */
extern void func_072D30(char *record);

void func_1251D8(char *record)
{
    char *nested = *(char **)(record + 0x58);
    char *value = *(char **)(nested + 0x54);

    if (value != 0) {
        func_072D30(value);
        *(char **)(nested + 0x54) = 0;
    }
}
