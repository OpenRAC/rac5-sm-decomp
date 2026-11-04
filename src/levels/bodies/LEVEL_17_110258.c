int func_1101D0(int);

int func_110258(void)
{
    unsigned int i;
    int res = 0;

    for (i = 0; i < 8; i++) {
        res |= (func_1101D0((int)i) != 0);
    }
    return res;
}
