extern int *D_00218B28[];

int GetThreadId(void);

int func_028CD0(void)
{
    if (D_00218B28[0] == 0)
        return 0;
    if (D_00218B28[0][0] == 3) {
        D_00218B28[0][5] = GetThreadId();
        return 1;
    }
    return 0;
}
