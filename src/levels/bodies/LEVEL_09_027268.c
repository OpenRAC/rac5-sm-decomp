extern unsigned char *D_001DDDAC;

void func_027268(void)
{
    unsigned char *value = D_001DDDAC + 0x1c7d;
    if (*value < 8)
        *value = 0;
    else
        *value = (*value - 4) & 0xfcu;
}
