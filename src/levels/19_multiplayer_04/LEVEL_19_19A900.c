extern char D_001DA348[];
extern void func_197FE8(void);

void func_19A900(char *record, unsigned int flags)
{
    *(char **)(record + 4) = D_001DA348;
    if ((flags & 1u) != 0)
        func_197FE8();
}
