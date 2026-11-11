int func_1391B0(int);
int func_139CC0(int);
int func_1392A8(void);

int func_1391F0(void)
{
    unsigned int i = 0;
    int flag = 0;
    int ok;

    ok = func_1391B0(0) != 0;
    while (i < 4) {
        int r = func_139CC0(i);

        i++;
        if (r == 1) {
            flag = 1;
            break;
        }
    }
    ok &= flag;
    return ok & (unsigned char)(func_1392A8() ^ 1);
}
