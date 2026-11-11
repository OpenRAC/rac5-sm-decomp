extern char D_00246328[];
extern void func_203A10(void);

void func_206328(char *record, unsigned int flags)
{
    *(char **)(record + 4) = D_00246328;
    if ((flags & 1u) != 0)
        func_203A10();
}
