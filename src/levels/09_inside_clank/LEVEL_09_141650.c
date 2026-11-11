extern void func_1250E8(void *, void *, void *, int);

void func_141650(char *record, signed char value)
{
    char *base = *(char **)(record + 0x58);
    func_1250E8(record, base + 4, base + 8, value);
}
