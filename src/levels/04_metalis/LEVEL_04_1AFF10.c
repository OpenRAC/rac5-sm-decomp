/* LEVEL_04:0x1AFF10 -- placement copy of LEVEL_01_1A4360.c: releases the two attached resources of the record when set. */
extern void func_083F98(char *record);
extern void func_0F7EB8(char *object);

void func_1AFF10(char *object)
{
    char *record = *(char **)(object + 0x58);

    if (*(char **)(record + 0x1C) != 0) {
        func_083F98(*(char **)(record + 0x1C));
        *(int *)(record + 0x1C) = 0;
    }
    if (*(char **)(record + 0x30) != 0) {
        func_0F7EB8(*(char **)(record + 0x30));
        *(int *)(record + 0x30) = 0;
    }
}
