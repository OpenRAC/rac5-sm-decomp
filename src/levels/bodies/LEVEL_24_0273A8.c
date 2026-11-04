extern int *D_001FD2A8[];

int GetThreadId(void);

int func_0273A8(void)
{
    if (D_001FD2A8[0] == 0)
        return 0;
    if (D_001FD2A8[0][0] == 3) {
        D_001FD2A8[0][5] = GetThreadId();
        return 1;
    }
    return 0;
}
