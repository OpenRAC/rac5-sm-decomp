extern unsigned char *D_001F3FAC;

void func_028260(void)
{
    unsigned char *value = D_001F3FAC + 0x1c7d;
    if (*value < 8)
        *value = 0;
    else
        *value = (*value - 4) & 0xfcu;
}
