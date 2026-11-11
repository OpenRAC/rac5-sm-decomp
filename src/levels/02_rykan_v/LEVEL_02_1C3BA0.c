/* LEVEL_02:0x1C3BA0 -- placement copy of LEVEL_01_1A4360.c: releases the two attached resources of the record when set. */
extern void func_087408(char *record);
extern void func_0F6B30(char *object);

void func_1C3BA0(char *object)
{
    char *record = *(char **)(object + 0x58);

    if (*(char **)(record + 0x1C) != 0) {
        func_087408(*(char **)(record + 0x1C));
        *(int *)(record + 0x1C) = 0;
    }
    if (*(char **)(record + 0x30) != 0) {
        func_0F6B30(*(char **)(record + 0x30));
        *(int *)(record + 0x30) = 0;
    }
}
