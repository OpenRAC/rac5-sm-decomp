/* LEVEL_09:0x196390 -- placement copy of LEVEL_01_1A4360.c: releases the two attached resources of the record when set. */
extern void func_07D5B8(char *record);
extern void func_0EC860(char *object);

void func_196390(char *object)
{
    char *record = *(char **)(object + 0x58);

    if (*(char **)(record + 0x1C) != 0) {
        func_07D5B8(*(char **)(record + 0x1C));
        *(int *)(record + 0x1C) = 0;
    }
    if (*(char **)(record + 0x30) != 0) {
        func_0EC860(*(char **)(record + 0x30));
        *(int *)(record + 0x30) = 0;
    }
}
