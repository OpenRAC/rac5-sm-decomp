extern unsigned char *D_001E2EC8;

int func_026D90(void)
{
    unsigned char *p = D_001E2EC8;
    if (p != 0)
    {
        p[0x45] = 2;
        return 1;
    }
    return 0;
}
