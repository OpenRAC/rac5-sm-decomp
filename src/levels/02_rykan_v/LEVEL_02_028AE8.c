extern char *D_00208C2C;

int func_028AE8(void)
{
    int fallback[4];
    int *value;
    fallback[0] = 3;
    value = (int *)(D_00208C2C + 0x1c78);
    if (*value > 2)
        value = fallback;
    return *value;
}
