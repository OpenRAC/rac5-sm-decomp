/* LEVEL_06:0x12CD50 -- placement copy of LEVEL_01_136708.c: releases the handle held in the nested record and clears it. */
extern void func_07A718(char *record);

void func_12CD50(char *record)
{
    char *nested = *(char **)(record + 0x58);
    char *value = *(char **)(nested + 0x54);

    if (value != 0) {
        func_07A718(value);
        *(char **)(nested + 0x54) = 0;
    }
}
