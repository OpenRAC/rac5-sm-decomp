extern int *D_00137A28[];

int GetThreadId(void);

int func_0243C8(void)
{
    if (D_00137A28[0] == 0)
        return 0;
    if (D_00137A28[0][0] == 3) {
        D_00137A28[0][5] = GetThreadId();
        return 1;
    }
    return 0;
}
