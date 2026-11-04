extern int *D_00280628[];

int GetThreadId(void);

int func_02A3E0(void)
{
    if (D_00280628[0] == 0)
        return 0;
    if (D_00280628[0][0] == 3) {
        D_00280628[0][5] = GetThreadId();
        return 1;
    }
    return 0;
}
