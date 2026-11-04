int func_125660(int);

int func_1256E8(void)
{
    unsigned int i;
    int res = 0;

    for (i = 0; i < 8; i++) {
        res |= (func_125660((int)i) != 0);
    }
    return res;
}
