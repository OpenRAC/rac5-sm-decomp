extern char *D_0015332C;

int func_022B98(void)
{
    int fallback[4];
    int *value;
    fallback[0] = 3;
    value = (int *)(D_0015332C + 0x1c78);
    if (*value > 2)
        value = fallback;
    return *value;
}
