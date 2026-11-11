extern char D_001DA508[];
extern void func_1982C0(void);

void func_19ABD8(char *record, unsigned int flags)
{
    *(char **)(record + 4) = D_001DA508;
    if ((flags & 1u) != 0)
        func_1982C0();
}
