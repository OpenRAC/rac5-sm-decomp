int func_1311C8(int);
int func_131CD8(int);
int func_1312C0(void);

int func_131208(void)
{
    unsigned int i = 0;
    int flag = 0;
    int ok;

    ok = func_1311C8(0) != 0;
    while (i < 4) {
        int r = func_131CD8(i);

        i++;
        if (r == 1) {
            flag = 1;
            break;
        }
    }
    ok &= flag;
    return ok & (unsigned char)(func_1312C0() ^ 1);
}
