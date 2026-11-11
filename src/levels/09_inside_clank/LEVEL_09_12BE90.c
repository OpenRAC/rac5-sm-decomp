extern char D_001F0B4C[];

int func_12BE90(void)
{
    int *p = *(int *)D_001F0B4C;

    return (*(int *)((char *)p + 0x94) >> 1) & 1;
}
