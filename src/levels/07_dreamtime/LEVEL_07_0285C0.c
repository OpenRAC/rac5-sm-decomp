extern unsigned char *D_002082AC;

void func_0285C0(void)
{
    unsigned char *value = D_002082AC + 0x1c7d;
    if (*value < 8)
        *value = 0;
    else
        *value = (*value - 4) & 0xfcu;
}
