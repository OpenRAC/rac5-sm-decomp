int func_10A2D0(int);
int func_10ADE0(int);
int func_10A3C8(void);

int func_10A310(void)
{
    unsigned int i = 0;
    int flag = 0;
    int ok;

    ok = func_10A2D0(0) != 0;
    while (i < 4) {
        int r = func_10ADE0(i);

        i++;
        if (r == 1) {
            flag = 1;
            break;
        }
    }
    ok &= flag;
    return ok & (unsigned char)(func_10A3C8() ^ 1);
}
