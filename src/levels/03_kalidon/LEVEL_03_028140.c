extern unsigned char *D_0020C62C;

void func_028140(void)
{
    unsigned char *value = D_0020C62C + 0x1c7d;
    if (*value < 8)
        *value = 0;
    else
        *value = (*value - 4) & 0xfcu;
}
