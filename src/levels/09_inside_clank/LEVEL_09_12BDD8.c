int func_12BD98(int);
int func_12C8A8(int);
int func_12BE90(void);

int func_12BDD8(void)
{
    unsigned int i = 0;
    int flag = 0;
    int ok;

    ok = func_12BD98(0) != 0;
    while (i < 4) {
        int r = func_12C8A8(i);

        i++;
        if (r == 1) {
            flag = 1;
            break;
        }
    }
    ok &= flag;
    return ok & (unsigned char)(func_12BE90() ^ 1);
}
