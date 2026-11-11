extern void func_11CFC8(void *, void *, void *, int);

void func_14B520(char *record, signed char value)
{
    char *base = *(char **)(record + 0x58);
    func_11CFC8(record, base + 4, base + 8, value);
}
