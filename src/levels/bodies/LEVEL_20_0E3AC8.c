int func_0E3A40(int);

int func_0E3AC8(void)
{
    unsigned int i;
    int res = 0;

    for (i = 0; i < 8; i++) {
        res |= (func_0E3A40((int)i) != 0);
    }
    return res;
}
