/* LEVEL_16:0x16C9F0 -- releases the record's embedded handle and resets its fields. */
extern void func_18DEB0(void *value);

int func_16C9F0(char *object)
{
    char *record = *(char **)(object + 0x58);

    func_18DEB0(record + 4);
    *(record + 0x40) = 0;
    *(int *)(record + 0x54) = 0;
    *(int *)record = 0;
    return 1;
}
