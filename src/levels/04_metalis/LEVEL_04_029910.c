extern int *D_0024BBA8[];

int GetThreadId(void);

int func_029910(void)
{
    if (D_0024BBA8[0] == 0)
        return 0;
    if (D_0024BBA8[0][0] == 3) {
        D_0024BBA8[0][5] = GetThreadId();
        return 1;
    }
    return 0;
}
