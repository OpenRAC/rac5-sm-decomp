/* LEVEL_10:0x1344E0 -- placement copy of LEVEL_01_136708.c: releases the handle held in the nested record and clears it. */
extern void func_081168(char *record);

void func_1344E0(char *record)
{
    char *nested = *(char **)(record + 0x58);
    char *value = *(char **)(nested + 0x54);

    if (value != 0) {
        func_081168(value);
        *(char **)(nested + 0x54) = 0;
    }
}
