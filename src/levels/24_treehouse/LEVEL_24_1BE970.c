extern char D_001F7358[];
extern void func_1BC058(void);

void func_1BE970(char *record, unsigned int flags)
{
    *(char **)(record + 4) = D_001F7358;
    if ((flags & 1u) != 0)
        func_1BC058();
}
