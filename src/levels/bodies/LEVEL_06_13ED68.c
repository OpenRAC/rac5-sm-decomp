extern void func_1227A8(void *, void *, void *, int);

void func_13ED68(char *record, signed char value)
{
    char *base = *(char **)(record + 0x58);
    func_1227A8(record, base + 4, base + 8, value);
}
