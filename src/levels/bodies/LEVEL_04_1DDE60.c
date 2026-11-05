extern void func_163018(char *, unsigned char, int);

void func_1DDE60(char *record)
{
    char *item = *(char **)(record + 0x58);
    char *p = *(char **)(item + 8);
    func_163018(p, *(unsigned char *)(p + 0x45), 9);
}
