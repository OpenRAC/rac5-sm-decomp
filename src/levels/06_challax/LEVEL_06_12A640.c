int func_12A5B8(int);

int func_12A640(void)
{
    unsigned int i;
    int res = 0;

    for (i = 0; i < 8; i++) {
        res |= (func_12A5B8((int)i) != 0);
    }
    return res;
}
