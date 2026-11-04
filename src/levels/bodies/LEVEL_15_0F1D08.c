int func_0F1CC8(int);
int func_0F27D8(int);
int func_0F1DC0(void);

int func_0F1D08(void)
{
    unsigned int i = 0;
    int flag = 0;
    int ok;

    ok = func_0F1CC8(0) != 0;
    while (i < 4) {
        int r = func_0F27D8(i);

        i++;
        if (r == 1) {
            flag = 1;
            break;
        }
    }
    ok &= flag;
    return ok & (unsigned char)(func_0F1DC0() ^ 1);
}
