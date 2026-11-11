extern unsigned char *D_001E332C;

int func_0B2260(int index)
{
    unsigned char *start = D_001E332C + 0x1960;
    unsigned char *cell = start - index;
    if (*cell != 0)
        return 0;
    *cell = 1;
    return 1;
}
