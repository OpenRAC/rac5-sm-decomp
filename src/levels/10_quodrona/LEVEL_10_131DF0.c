int func_131D68(int);

int func_131DF0(void)
{
    unsigned int i;
    int res = 0;

    for (i = 0; i < 8; i++) {
        res |= (func_131D68((int)i) != 0);
    }
    return res;
}
