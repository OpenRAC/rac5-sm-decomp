extern char *D_00148C2C;

int func_0221B8(void)
{
    int fallback[4];
    int *value;
    fallback[0] = 3;
    value = (int *)(D_00148C2C + 0x1c78);
    if (*value > 2)
        value = fallback;
    return *value;
}
