extern char *D_0023CB2C;

int func_028928(void)
{
    int fallback[4];
    int *value;
    fallback[0] = 3;
    value = (int *)(D_0023CB2C + 0x1c78);
    if (*value > 2)
        value = fallback;
    return *value;
}
