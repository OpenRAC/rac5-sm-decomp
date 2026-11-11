extern void func_115C28(char *);

void func_11CB10(char *record)
{
    char *p = *(char **)(record + 0x70);
    if (p != 0)
        func_115C28(p);
}
