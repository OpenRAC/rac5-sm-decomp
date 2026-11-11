/* LEVEL_18:0x1724B8 -- placement copy of LEVEL_16_16C9F0.c: releases the record's embedded handle and resets its fields. */
extern void func_18F350(void *value);

int func_1724B8(char *object)
{
    char *record = *(char **)(object + 0x58);

    func_18F350(record + 4);
    *(record + 0x40) = 0;
    *(int *)(record + 0x54) = 0;
    *(int *)record = 0;
    return 1;
}
