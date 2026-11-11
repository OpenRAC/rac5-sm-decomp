/* LEVEL_08:0x1AD9C0 -- placement copy of LEVEL_04_196DA0.c: releases the record's attached resource when one is set. */
extern void func_073C48(char *record);
extern void func_073710(char *object);

void func_1AD9C0(char *object)
{
    char *record = *(char **)(object + 0x58);

    if (*(char **)(record + 0xC) != 0) {
        func_073C48(*(char **)(record + 0xC));
        func_073710(*(char **)(record + 0xC));
    }
}
