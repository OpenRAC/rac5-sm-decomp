extern int *D_001E0428[];

int GetThreadId(void);

int func_026E70(void)
{
    if (D_001E0428[0] == 0)
        return 0;
    if (D_001E0428[0][0] == 3) {
        D_001E0428[0][5] = GetThreadId();
        return 1;
    }
    return 0;
}
