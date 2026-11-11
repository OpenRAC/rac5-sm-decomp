extern int func_16C830(void *, void *, int, void *);

void func_1671C0(char *record, void *value)
{
    char *nested = *(char **)(record + 0x58);
    int result = func_16C830(record, nested + 0xa0, 0, value);
    *(int *)(nested + 0xdc) = result;
}
