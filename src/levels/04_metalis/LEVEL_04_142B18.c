/* LEVEL_04:0x142B18 -- placement copy of LEVEL_01_136708.c: releases the handle held in the nested record and clears it. */
extern void func_083F98(char *record);

void func_142B18(char *record)
{
    char *nested = *(char **)(record + 0x58);
    char *value = *(char **)(nested + 0x54);

    if (value != 0) {
        func_083F98(value);
        *(char **)(nested + 0x54) = 0;
    }
}
