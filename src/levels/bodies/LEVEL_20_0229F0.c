extern char *D_00104194;

int func_0229F0(void)
{
    int fallback[4];
    int *value;
    fallback[0] = 3;
    value = (int *)(D_00104194 + 0x1c78);
    if (*value > 2)
        value = fallback;
    return *value;
}
