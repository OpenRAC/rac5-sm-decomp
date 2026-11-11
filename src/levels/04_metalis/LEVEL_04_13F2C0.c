int func_13F280(int);
int func_13FD90(int);
int func_13F378(void);

int func_13F2C0(void)
{
    unsigned int i = 0;
    int flag = 0;
    int ok;

    ok = func_13F280(0) != 0;
    while (i < 4) {
        int r = func_13FD90(i);

        i++;
        if (r == 1) {
            flag = 1;
            break;
        }
    }
    ok &= flag;
    return ok & (unsigned char)(func_13F378() ^ 1);
}
