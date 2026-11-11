extern unsigned char *D_00208C2C;

void func_028A48(void)
{
    unsigned char *value = D_00208C2C + 0x1c7d;
    if (*value < 8)
        *value = 0;
    else
        *value = (*value - 4) & 0xfcu;
}
