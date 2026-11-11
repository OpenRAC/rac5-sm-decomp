int func_144338(int);
int func_144E48(int);
int func_144430(void);

int func_144378(void)
{
    unsigned int i = 0;
    int flag = 0;
    int ok;

    ok = func_144338(0) != 0;
    while (i < 4) {
        int r = func_144E48(i);

        i++;
        if (r == 1) {
            flag = 1;
            break;
        }
    }
    ok &= flag;
    return ok & (unsigned char)(func_144430() ^ 1);
}
