extern void func_12C150(void *, void *, void *, int);

void func_148670(char *record, signed char value)
{
    char *base = *(char **)(record + 0x58);
    func_12C150(record, base + 4, base + 8, value);
}
