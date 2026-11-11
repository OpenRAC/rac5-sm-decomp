extern char D_00240D88[];
extern void func_1FF6F8(void);

void func_202010(char *record, unsigned int flags)
{
    *(char **)(record + 4) = D_00240D88;
    if ((flags & 1u) != 0)
        func_1FF6F8();
}
