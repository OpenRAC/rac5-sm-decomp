extern int *D_0021E128[];

int GetThreadId(void);

int func_028250(void)
{
    if (D_0021E128[0] == 0)
        return 0;
    if (D_0021E128[0][0] == 3) {
        D_0021E128[0][5] = GetThreadId();
        return 1;
    }
    return 0;
}
