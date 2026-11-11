extern void func_108F90(void *, void *, void *, int);

void func_12D4C8(char *record, signed char value)
{
    char *base = *(char **)(record + 0x58);
    func_108F90(record, base + 4, base + 8, value);
}
