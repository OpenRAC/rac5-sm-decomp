extern void func_108508(void *, void *, void *, int);

void func_12CF18(char *record, signed char value)
{
    char *base = *(char **)(record + 0x58);
    func_108508(record, base + 4, base + 8, value);
}
