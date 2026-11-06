extern char D_00212C18[];
extern void func_1D51E8(void);

void func_1D7B00(char *record, unsigned int flags)
{
    *(char **)(record + 4) = D_00212C18;
    if ((flags & 1u) != 0)
        func_1D51E8();
}
