int func_13A298(int);

int func_13A320(void)
{
    unsigned int i;
    int res = 0;

    for (i = 0; i < 8; i++) {
        res |= (func_13A298((int)i) != 0);
    }
    return res;
}
