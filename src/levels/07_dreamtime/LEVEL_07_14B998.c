extern void func_12F150(void *, void *, void *, int);

void func_14B998(char *record, signed char value)
{
    char *base = *(char **)(record + 0x58);
    func_12F150(record, base + 4, base + 8, value);
}
