extern void func_107C40(void *, void *, void *, int);

void func_12C570(char *record, signed char value)
{
    char *base = *(char **)(record + 0x58);
    func_107C40(record, base + 4, base + 8, value);
}
