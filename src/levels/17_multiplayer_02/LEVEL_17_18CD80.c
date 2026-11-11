extern char D_001CB4A8[];
extern void func_18A468(void);

void func_18CD80(char *record, unsigned int flags)
{
    *(char **)(record + 4) = D_001CB4A8;
    if ((flags & 1u) != 0)
        func_18A468();
}
