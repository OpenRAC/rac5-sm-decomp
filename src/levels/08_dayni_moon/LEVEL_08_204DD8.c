extern void func_168D58(char *, unsigned char, int);

void func_204DD8(char *record)
{
    char *item = *(char **)(record + 0x58);
    char *p = *(char **)(item + 8);
    func_168D58(p, *(unsigned char *)(p + 0x45), 9);
}
