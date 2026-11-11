extern int *D_002313A8[];

int GetThreadId(void);

int func_029E68(void)
{
    if (D_002313A8[0] == 0)
        return 0;
    if (D_002313A8[0][0] == 3) {
        D_002313A8[0][5] = GetThreadId();
        return 1;
    }
    return 0;
}
