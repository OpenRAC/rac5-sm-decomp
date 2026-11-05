extern void func_132500(void *, void *, void *, int);

void func_14EEE8(char *record, signed char value)
{
    char *base = *(char **)(record + 0x58);
    func_132500(record, base + 4, base + 8, value);
}
