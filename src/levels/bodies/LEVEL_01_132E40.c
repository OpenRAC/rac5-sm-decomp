int func_132E00(int);
int func_133910(int);
int func_132EF8(void);

int func_132E40(void)
{
    unsigned int i = 0;
    int flag = 0;
    int ok;

    ok = func_132E00(0) != 0;
    while (i < 4) {
        int r = func_133910(i);

        i++;
        if (r == 1) {
            flag = 1;
            break;
        }
    }
    ok &= flag;
    return ok & (unsigned char)(func_132EF8() ^ 1);
}
