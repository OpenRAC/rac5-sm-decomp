int func_145420(int);

int func_1454A8(void)
{
    unsigned int i;
    int res = 0;

    for (i = 0; i < 8; i++) {
        res |= (func_145420((int)i) != 0);
    }
    return res;
}
