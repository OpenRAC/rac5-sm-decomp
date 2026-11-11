extern void func_109630(void *, void *, void *, int);

void func_12E0F0(char *record, signed char value)
{
    char *base = *(char **)(record + 0x58);
    func_109630(record, base + 4, base + 8, value);
}
