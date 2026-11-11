/* LEVEL_17:0x136448 -- placement copy of LEVEL_02_164718.c: releases the record held in a nested object's field and clears the field. */
extern void func_073DB0(char *record);

void func_136448(char *record)
{
    char *nested = *(char **)(record + 0x58);
    char *value = *(char **)(nested + 0x10);

    if (value != 0) {
        func_073DB0(value);
        *(int *)(nested + 0x10) = 0;
    }
}
