/* LEVEL_03:0x134A68 -- placement copy of LEVEL_01_136708.c: releases the handle held in the nested record and clears it. */
extern void func_080918(char *record);

void func_134A68(char *record)
{
    char *nested = *(char **)(record + 0x58);
    char *value = *(char **)(nested + 0x54);

    if (value != 0) {
        func_080918(value);
        *(char **)(nested + 0x54) = 0;
    }
}
