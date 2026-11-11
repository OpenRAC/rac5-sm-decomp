extern unsigned char *D_001FCFAC;

void func_027B40(void)
{
    unsigned char *value = D_001FCFAC + 0x1c7d;
    if (*value < 8)
        *value = 0;
    else
        *value = (*value - 4) & 0xfcu;
}
