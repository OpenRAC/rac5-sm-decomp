int func_10B3B8(int);

int func_10B440(void)
{
    unsigned int i;
    int res = 0;

    for (i = 0; i < 8; i++) {
        res |= (func_10B3B8((int)i) != 0);
    }
    return res;
}
