int func_130C60(int);
int func_131790(int);
int func_130D58(void);

int func_130CA0(void)
{
    unsigned int i = 0;
    int flag = 0;
    int ok;

    ok = func_130C60(0) != 0;
    while (i < 4) {
        int r = func_131790(i);

        i++;
        if (r == 1) {
            flag = 1;
            break;
        }
    }
    ok &= flag;
    return ok & (unsigned char)(func_130D58() ^ 1);
}
