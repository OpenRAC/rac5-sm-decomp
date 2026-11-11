extern void func_13D688(void *, void *, void *, int);

void func_15AAF0(char *record, signed char value)
{
    char *base = *(char **)(record + 0x58);
    func_13D688(record, base + 4, base + 8, value);
}
