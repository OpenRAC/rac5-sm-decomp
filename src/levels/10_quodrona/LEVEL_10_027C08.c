extern char *D_001FCFAC;

int func_027C08(void)
{
    int fallback[4];
    int *value;
    fallback[0] = 3;
    value = (int *)(D_001FCFAC + 0x1c78);
    if (*value > 2)
        value = fallback;
    return *value;
}
