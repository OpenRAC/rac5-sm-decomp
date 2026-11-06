extern char D_001F8928[];
extern void func_1BE7C0(void);

void func_1C10D8(char *record, unsigned int flags)
{
    *(char **)(record + 4) = D_001F8928;
    if ((flags & 1u) != 0)
        func_1BE7C0();
}
