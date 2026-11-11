extern int *D_001E00A8[];

int GetThreadId(void);

int func_0278C0(void)
{
    if (D_001E00A8[0] == 0)
        return 0;
    if (D_001E00A8[0][0] == 3) {
        D_001E00A8[0][5] = GetThreadId();
        return 1;
    }
    return 0;
}
