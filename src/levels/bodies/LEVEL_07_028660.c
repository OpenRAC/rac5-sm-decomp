extern char *D_002082AC;

int func_028660(void)
{
    int fallback[4];
    int *value;
    fallback[0] = 3;
    value = (int *)(D_002082AC + 0x1c78);
    if (*value > 2)
        value = fallback;
    return *value;
}
