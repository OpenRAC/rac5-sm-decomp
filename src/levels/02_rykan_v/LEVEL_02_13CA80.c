/* LEVEL_02:0x13CA80 -- placement copy of LEVEL_01_136708.c: releases the handle held in the nested record and clears it. */
extern void func_087408(char *record);

void func_13CA80(char *record)
{
    char *nested = *(char **)(record + 0x58);
    char *value = *(char **)(nested + 0x54);

    if (value != 0) {
        func_087408(value);
        *(char **)(nested + 0x54) = 0;
    }
}
