extern char *func_111AA0(void);
extern int D_001B96F0[];

int func_112488(void)
{
    char *record = func_111AA0();
    return D_001B96F0[*(int *)(record + 0xfc8) + 1];
}
