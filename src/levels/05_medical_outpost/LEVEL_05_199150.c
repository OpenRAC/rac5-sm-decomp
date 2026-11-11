/* LEVEL_05:0x199150 -- placement copy of LEVEL_02_164718.c: releases the record held in a nested object's field and clears the field. */
extern void func_07E1D8(char *record);

void func_199150(char *record)
{
    char *nested = *(char **)(record + 0x58);
    char *value = *(char **)(nested + 0x10);

    if (value != 0) {
        func_07E1D8(value);
        *(int *)(nested + 0x10) = 0;
    }
}
