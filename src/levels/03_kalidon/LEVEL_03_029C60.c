extern int *D_0024C228[];

int GetThreadId(void);

int func_029C60(void)
{
    if (D_0024C228[0] == 0)
        return 0;
    if (D_0024C228[0][0] == 3) {
        D_0024C228[0][5] = GetThreadId();
        return 1;
    }
    return 0;
}
