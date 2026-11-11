extern char *D_001DDDAC;

int func_027308(void)
{
    int fallback[4];
    int *value;
    fallback[0] = 3;
    value = (int *)(D_001DDDAC + 0x1c78);
    if (*value > 2)
        value = fallback;
    return *value;
}
