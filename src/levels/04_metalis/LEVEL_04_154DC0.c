extern void func_1385D0(void *, void *, void *, int);

void func_154DC0(char *record, signed char value)
{
    char *base = *(char **)(record + 0x58);
    func_1385D0(record, base + 4, base + 8, value);
}
