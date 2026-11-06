extern char D_002171A8[];
extern void func_1DA778(void);

void func_1DD090(char *record, unsigned int flags)
{
    *(char **)(record + 4) = D_002171A8;
    if ((flags & 1u) != 0)
        func_1DA778();
}
