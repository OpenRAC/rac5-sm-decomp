extern char D_001735D8[];
extern void func_140078(void);

void func_142990(char *record, unsigned int flags)
{
    *(char **)(record + 4) = D_001735D8;
    if ((flags & 1u) != 0)
        func_140078();
}
