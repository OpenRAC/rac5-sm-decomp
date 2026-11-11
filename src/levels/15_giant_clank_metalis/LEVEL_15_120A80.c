extern void func_115C28(char *);

void func_120A80(char *record)
{
    char *p = *(char **)(record + 0x58);
    if (p != 0)
        func_115C28(p);
}
