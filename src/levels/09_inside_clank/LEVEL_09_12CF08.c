int func_12CE80(int);

int func_12CF08(void)
{
    unsigned int i;
    int res = 0;

    for (i = 0; i < 8; i++) {
        res |= (func_12CE80((int)i) != 0);
    }
    return res;
}
