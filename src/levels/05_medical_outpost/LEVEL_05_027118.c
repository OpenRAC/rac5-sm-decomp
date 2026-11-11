extern char *D_001E332C;

int func_027118(void)
{
    int fallback[4];
    int *value;
    fallback[0] = 3;
    value = (int *)(D_001E332C + 0x1c78);
    if (*value > 2)
        value = fallback;
    return *value;
}
