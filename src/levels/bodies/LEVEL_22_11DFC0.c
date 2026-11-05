extern void func_102D40(void *, void *, void *, int);

void func_11DFC0(char *record, signed char value)
{
    char *base = *(char **)(record + 0x58);
    func_102D40(record, base + 4, base + 8, value);
}
