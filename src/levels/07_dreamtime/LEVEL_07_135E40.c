int func_135E00(int);
int func_136910(int);
int func_135EF8(void);

int func_135E40(void)
{
    unsigned int i = 0;
    int flag = 0;
    int ok;

    ok = func_135E00(0) != 0;
    while (i < 4) {
        int r = func_136910(i);

        i++;
        if (r == 1) {
            flag = 1;
            break;
        }
    }
    ok &= flag;
    return ok & (unsigned char)(func_135EF8() ^ 1);
}
