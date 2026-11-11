extern int *D_001FE828[];

int GetThreadId(void);

int func_0279D8(void)
{
    if (D_001FE828[0] == 0)
        return 0;
    if (D_001FE828[0][0] == 3) {
        D_001FE828[0][5] = GetThreadId();
        return 1;
    }
    return 0;
}
