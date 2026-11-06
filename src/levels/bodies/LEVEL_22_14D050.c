extern char D_0017D098[];
extern void func_14A738(void);

void func_14D050(char *record, unsigned int flags)
{
    *(char **)(record + 4) = D_0017D098;
    if ((flags & 1u) != 0)
        func_14A738();
}
