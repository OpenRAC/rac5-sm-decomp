extern char D_002429A8[];
extern void func_200018(void);

void func_202930(char *record, unsigned int flags)
{
    *(char **)(record + 4) = D_002429A8;
    if ((flags & 1u) != 0)
        func_200018();
}
