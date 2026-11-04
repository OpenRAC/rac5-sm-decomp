extern char D_0024FF0C[];

int func_144318(void)
{
    int *p = *(int *)D_0024FF0C;

    return ((*(int *)((char *)p + 0x94) >> 2) ^ 1) & 1;
}
