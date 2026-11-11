extern char D_001F0B4C[];

int func_12BD78(int unused)
{
    int *p = *(int *)D_001F0B4C;

    return ((*(int *)((char *)p + 0x94) >> 2) ^ 1) & 1;
}
