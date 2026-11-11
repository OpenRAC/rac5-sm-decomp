extern int *D_00182FA8[];

int GetThreadId(void);

int func_024400(void)
{
    if (D_00182FA8[0] == 0)
        return 0;
    if (D_00182FA8[0][0] == 3) {
        D_00182FA8[0][5] = GetThreadId();
        return 1;
    }
    return 0;
}
