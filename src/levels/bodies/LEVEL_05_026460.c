extern char *D_001E332C;

int func_026460(void)
{
    int index;
    char *base = D_001E332C + 0x1b60;
    for (index = 10; index != 0; index--)
        if ((base[index] & 2) != 0) return index;
    return 1;
}
