extern void func_129FB0(void *, void *, void *, int);

void func_145A70(char *record, signed char value)
{
    char *base = *(char **)(record + 0x58);
    func_129FB0(record, base + 4, base + 8, value);
}
