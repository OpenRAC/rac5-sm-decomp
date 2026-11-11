extern char D_001B4B5C[];

int func_10FCF0(void)
{
    int *p = *(int *)D_001B4B5C;

    return (*(int *)((char *)p + 0x94) >> 1) & 1;
}
