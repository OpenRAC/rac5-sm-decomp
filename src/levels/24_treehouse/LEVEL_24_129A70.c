int func_1299E8(int);

int func_129A70(void)
{
    unsigned int i;
    int res = 0;

    for (i = 0; i < 8; i++) {
        res |= (func_1299E8((int)i) != 0);
    }
    return res;
}
