extern int *D_00179528[];

int GetThreadId(void);

int func_023640(void)
{
    if (D_00179528[0] == 0)
        return 0;
    if (D_00179528[0][0] == 3) {
        D_00179528[0][5] = GetThreadId();
        return 1;
    }
    return 0;
}
