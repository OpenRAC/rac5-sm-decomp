extern char *D_001F3FAC;

int func_0B3540(long long unused, int index)
{
    unsigned char *p = (unsigned char *)D_001F3FAC + 0x1960;
    return p[-index] != 0;
}
