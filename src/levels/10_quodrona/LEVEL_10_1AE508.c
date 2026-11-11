/* LEVEL_10:0x1AE508 -- placement copy of LEVEL_01_1A4360.c: releases the two attached resources of the record when set. */
extern void func_081168(char *record);
extern void func_0F02C0(char *object);

void func_1AE508(char *object)
{
    char *record = *(char **)(object + 0x58);

    if (*(char **)(record + 0x1C) != 0) {
        func_081168(*(char **)(record + 0x1C));
        *(int *)(record + 0x1C) = 0;
    }
    if (*(char **)(record + 0x30) != 0) {
        func_0F02C0(*(char **)(record + 0x30));
        *(int *)(record + 0x30) = 0;
    }
}
