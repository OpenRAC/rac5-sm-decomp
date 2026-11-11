int func_12E778(int);
int func_12F288(int);
int func_12E870(void);

int func_12E7B8(void)
{
    unsigned int i = 0;
    int flag = 0;
    int ok;

    ok = func_12E778(0) != 0;
    while (i < 4) {
        int r = func_12F288(i);

        i++;
        if (r == 1) {
            flag = 1;
            break;
        }
    }
    ok &= flag;
    return ok & (unsigned char)(func_12E870() ^ 1);
}
