extern unsigned char *D_0023CB2C;

void func_028888(void)
{
    unsigned char *value = D_0023CB2C + 0x1c7d;
    if (*value < 8)
        *value = 0;
    else
        *value = (*value - 4) & 0xfcu;
}
