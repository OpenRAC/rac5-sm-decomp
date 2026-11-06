extern char *D_001A2C34;

int func_025A78(void)
{
    int fallback[4];
    int *value;
    fallback[0] = 3;
    value = (int *)(D_001A2C34 + 0x1c78);
    if (*value > 2)
        value = fallback;
    return *value;
}
