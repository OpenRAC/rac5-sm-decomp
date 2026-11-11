extern char D_0027A728[];
extern void func_233F08(void);

void func_236820(char *record, unsigned int flags)
{
    *(char **)(record + 4) = D_0027A728;
    if ((flags & 1u) != 0)
        func_233F08();
}
