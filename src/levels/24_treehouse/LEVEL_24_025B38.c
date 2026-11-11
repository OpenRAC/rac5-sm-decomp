extern char *D_001C4C2C;

int func_025B38(void)
{
    int fallback[4];
    int *value;
    fallback[0] = 3;
    value = (int *)(D_001C4C2C + 0x1c78);
    if (*value > 2)
        value = fallback;
    return *value;
}
