/* LEVEL_23:0x185658 -- placement copy of LEVEL_01_1A4360.c: releases the two attached resources of the record when set. */
extern void func_077F38(char *record);
extern void func_0E3868(char *object);

void func_185658(char *object)
{
    char *record = *(char **)(object + 0x58);

    if (*(char **)(record + 0x1C) != 0) {
        func_077F38(*(char **)(record + 0x1C));
        *(int *)(record + 0x1C) = 0;
    }
    if (*(char **)(record + 0x30) != 0) {
        func_0E3868(*(char **)(record + 0x30));
        *(int *)(record + 0x30) = 0;
    }
}
