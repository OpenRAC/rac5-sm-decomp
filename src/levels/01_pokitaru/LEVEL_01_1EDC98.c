extern char D_0022B4A8[];
extern void func_1EB380(void);

void func_1EDC98(char *record, unsigned int flags)
{
    *(char **)(record + 4) = D_0022B4A8;
    if ((flags & 1u) != 0)
        func_1EB380();
}
