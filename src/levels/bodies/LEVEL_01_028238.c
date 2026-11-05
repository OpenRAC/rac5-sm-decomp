extern unsigned char *D_001F3FAC;

void func_028238(void)
{
    unsigned char *p = D_001F3FAC + 0x1c7d;
    if (*p < 12)
        ++*p;
}
