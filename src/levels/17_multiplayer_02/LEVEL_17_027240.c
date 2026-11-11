extern int *D_001D13A8[];

int GetThreadId(void);

int func_027240(void)
{
    if (D_001D13A8[0] == 0)
        return 0;
    if (D_001D13A8[0][0] == 3) {
        D_001D13A8[0][5] = GetThreadId();
        return 1;
    }
    return 0;
}
