int func_0207D0(int);
int func_0212B0(int);
int func_0208C8(void);

int func_020810(void)
{
    unsigned int i = 0;
    int flag = 0;
    int ok;

    ok = func_0207D0(0) != 0;
    while (i < 4) {
        int r = func_0212B0(i);

        i++;
        if (r == 1) {
            flag = 1;
            break;
        }
    }
    ok &= flag;
    return ok & (unsigned char)(func_0208C8() ^ 1);
}
