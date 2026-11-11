extern unsigned char *D_001041D4;

int func_022CC8(void)
{
    unsigned char *p = D_001041D4;
    if (p != 0)
    {
        p[0x45] = 1;
        return 1;
    }
    return 0;
}
