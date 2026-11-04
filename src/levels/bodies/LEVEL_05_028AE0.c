extern int *D_0021D0A8[];

int GetThreadId(void);

int func_028AE0(void)
{
    if (D_0021D0A8[0] == 0)
        return 0;
    if (D_0021D0A8[0][0] == 3) {
        D_0021D0A8[0][5] = GetThreadId();
        return 1;
    }
    return 0;
}
