extern char D_00234868[];
extern void func_1F43D8(void);

void func_1F6CF0(char *record, unsigned int flags)
{
    *(char **)(record + 4) = D_00234868;
    if ((flags & 1u) != 0)
        func_1F43D8();
}
