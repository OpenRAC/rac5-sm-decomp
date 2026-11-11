/* LEVEL_19:0x16E678 -- placement copy of LEVEL_16_16C9F0.c: releases the record's embedded handle and resets its fields. */
extern void func_18CF18(void *value);

int func_16E678(char *object)
{
    char *record = *(char **)(object + 0x58);

    func_18CF18(record + 4);
    *(record + 0x40) = 0;
    *(int *)(record + 0x54) = 0;
    *(int *)record = 0;
    return 1;
}
