extern char *D_001A1AB4;

int func_025ED0(void)
{
    int fallback[4];
    int *value;
    fallback[0] = 3;
    value = (int *)(D_001A1AB4 + 0x1c78);
    if (*value > 2)
        value = fallback;
    return *value;
}
