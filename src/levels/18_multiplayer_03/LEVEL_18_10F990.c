int func_10F908(int);

int func_10F990(void)
{
    unsigned int i;
    int res = 0;

    for (i = 0; i < 8; i++) {
        res |= (func_10F908((int)i) != 0);
    }
    return res;
}
