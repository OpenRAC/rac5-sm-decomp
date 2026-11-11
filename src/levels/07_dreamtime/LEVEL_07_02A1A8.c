extern int *D_00246CA8[];

int GetThreadId(void);

int func_02A1A8(void)
{
    if (D_00246CA8[0] == 0)
        return 0;
    if (D_00246CA8[0][0] == 3) {
        D_00246CA8[0][5] = GetThreadId();
        return 1;
    }
    return 0;
}
