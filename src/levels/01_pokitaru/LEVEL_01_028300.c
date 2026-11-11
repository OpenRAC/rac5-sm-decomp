extern char *D_001F3FAC;

int func_028300(void)
{
    int fallback[4];
    int *value;
    fallback[0] = 3;
    value = (int *)(D_001F3FAC + 0x1c78);
    if (*value > 2)
        value = fallback;
    return *value;
}
