extern char D_001DA198[];
extern void func_196E20(void);

void func_199738(char *record, unsigned int flags)
{
    *(char **)(record + 4) = D_001DA198;
    if ((flags & 1u) != 0)
        func_196E20();
}
