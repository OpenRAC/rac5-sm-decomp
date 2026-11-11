int func_0F2DB0(int);

int func_0F2E38(void)
{
    unsigned int i;
    int res = 0;

    for (i = 0; i < 8; i++) {
        res |= (func_0F2DB0((int)i) != 0);
    }
    return res;
}
