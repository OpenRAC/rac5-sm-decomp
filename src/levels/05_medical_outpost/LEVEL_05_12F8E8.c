int func_12F860(int);

int func_12F8E8(void)
{
    unsigned int i;
    int res = 0;

    for (i = 0; i < 8; i++) {
        res |= (func_12F860((int)i) != 0);
    }
    return res;
}
