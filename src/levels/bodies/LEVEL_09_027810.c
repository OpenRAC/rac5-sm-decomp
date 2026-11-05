extern unsigned char *D_001DDDC8;

int func_027810(void)
{
    unsigned char *p = D_001DDDC8;
    if (p != 0)
    {
        p[0x45] = 2;
        return 1;
    }
    return 0;
}
