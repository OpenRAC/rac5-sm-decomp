extern unsigned char *D_001F3FC8;

int func_028988(void)
{
    unsigned char *p = D_001F3FC8;
    if (p != 0)
    {
        p[0x45] = 2;
        return 1;
    }
    return 0;
}
