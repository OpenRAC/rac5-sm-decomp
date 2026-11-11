extern char *D_001950B4;

int func_025850(void)
{
    int fallback[4];
    int *value;
    fallback[0] = 3;
    value = (int *)(D_001950B4 + 0x1c78);
    if (*value > 2)
        value = fallback;
    return *value;
}
