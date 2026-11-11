extern void func_127AC8(void *, void *, void *, int);

void func_144060(char *record, signed char value)
{
    char *base = *(char **)(record + 0x58);
    func_127AC8(record, base + 4, base + 8, value);
}
