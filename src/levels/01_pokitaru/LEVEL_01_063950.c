extern unsigned char D_00239158[];

void func_063950(char *record)
{
    unsigned char *flags = D_00239158;
    if ((flags[0x44] & 8) != 0) {
        *(unsigned short *)(record + 0x102) = 0x21;
        flags[0x44] &= 0xf7;
    }
}
