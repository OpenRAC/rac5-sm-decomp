extern char *D_0020C62C;

int func_0281E0(void)
{
    int fallback[4];
    int *value;
    fallback[0] = 3;
    value = (int *)(D_0020C62C + 0x1c78);
    if (*value > 2)
        value = fallback;
    return *value;
}
