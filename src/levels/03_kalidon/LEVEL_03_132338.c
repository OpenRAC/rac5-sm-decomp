int func_1322B0(int);

int func_132338(void)
{
    unsigned int i;
    int res = 0;

    for (i = 0; i < 8; i++) {
        res |= (func_1322B0((int)i) != 0);
    }
    return res;
}
