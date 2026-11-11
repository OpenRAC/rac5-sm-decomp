extern char *D_0020D12C;

int func_027F68(void)
{
    int fallback[4];
    int *value;
    fallback[0] = 3;
    value = (int *)(D_0020D12C + 0x1c78);
    if (*value > 2)
        value = fallback;
    return *value;
}
