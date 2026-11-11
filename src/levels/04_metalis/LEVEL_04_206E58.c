extern char D_00245CB8[];
extern void func_204540(void);

void func_206E58(char *record, unsigned int flags)
{
    *(char **)(record + 4) = D_00245CB8;
    if ((flags & 1u) != 0)
        func_204540();
}
