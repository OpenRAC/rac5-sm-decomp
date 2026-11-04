int func_140368(int);

int func_1403F0(void)
{
    unsigned int i;
    int res = 0;

    for (i = 0; i < 8; i++) {
        res |= (func_140368((int)i) != 0);
    }
    return res;
}
