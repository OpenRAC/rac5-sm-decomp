extern char *D_001E2EAC;

int func_0268B0(void)
{
    int fallback[4];
    int *value;
    fallback[0] = 3;
    value = (int *)(D_001E2EAC + 0x1c78);
    if (*value > 2)
        value = fallback;
    return *value;
}
