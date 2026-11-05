extern void func_12A3B8(void *, void *, void *, int);

void func_147B00(char *record, signed char value)
{
    char *base = *(char **)(record + 0x58);
    func_12A3B8(record, base + 4, base + 8, value);
}
