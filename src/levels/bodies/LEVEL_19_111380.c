int func_1112F8(int);

int func_111380(void)
{
    unsigned int i;
    int res = 0;

    for (i = 0; i < 8; i++) {
        res |= (func_1112F8((int)i) != 0);
    }
    return res;
}
