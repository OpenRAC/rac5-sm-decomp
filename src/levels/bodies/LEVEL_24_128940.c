int func_128900(int);
int func_129410(int);
int func_1289F8(void);

int func_128940(void)
{
    unsigned int i = 0;
    int flag = 0;
    int ok;

    ok = func_128900(0) != 0;
    while (i < 4) {
        int r = func_129410(i);

        i++;
        if (r == 1) {
            flag = 1;
            break;
        }
    }
    ok &= flag;
    return ok & (unsigned char)(func_1289F8() ^ 1);
}
