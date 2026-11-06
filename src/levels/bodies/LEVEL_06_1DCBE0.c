extern char D_002181F8[];
extern void func_1DA2C8(void);

void func_1DCBE0(char *record, unsigned int flags)
{
    *(char **)(record + 4) = D_002181F8;
    if ((flags & 1u) != 0)
        func_1DA2C8();
}
