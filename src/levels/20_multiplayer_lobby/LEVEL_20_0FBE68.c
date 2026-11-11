extern char D_00131B18[];
extern void func_0F9550(void);

void func_0FBE68(char *record, unsigned int flags)
{
    *(char **)(record + 4) = D_00131B18;
    if ((flags & 1u) != 0)
        func_0F9550();
}
