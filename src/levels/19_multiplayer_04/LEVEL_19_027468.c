extern int *D_001E0228[];

int GetThreadId(void);

int func_027468(void)
{
    if (D_001E0228[0] == 0)
        return 0;
    if (D_001E0228[0][0] == 3) {
        D_001E0228[0][5] = GetThreadId();
        return 1;
    }
    return 0;
}
