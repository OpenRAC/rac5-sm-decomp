extern void func_121C50(void *, void *, void *, int);

void func_13EBC0(char *record, signed char value)
{
    char *base = *(char **)(record + 0x58);
    func_121C50(record, base + 4, base + 8, value);
}
