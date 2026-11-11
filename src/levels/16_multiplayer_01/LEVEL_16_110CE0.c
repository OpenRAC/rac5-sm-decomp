int func_110C58(int);

int func_110CE0(void)
{
    unsigned int i;
    int res = 0;

    for (i = 0; i < 8; i++) {
        res |= (func_110C58((int)i) != 0);
    }
    return res;
}
