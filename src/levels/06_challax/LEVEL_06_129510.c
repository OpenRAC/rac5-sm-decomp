int func_1294D0(int);
int func_129FE0(int);
int func_1295C8(void);

int func_129510(void)
{
    unsigned int i = 0;
    int flag = 0;
    int ok;

    ok = func_1294D0(0) != 0;
    while (i < 4) {
        int r = func_129FE0(i);

        i++;
        if (r == 1) {
            flag = 1;
            break;
        }
    }
    ok &= flag;
    return ok & (unsigned char)(func_1295C8() ^ 1);
}
