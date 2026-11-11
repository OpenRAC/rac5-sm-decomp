extern unsigned char D_00224E58[];

void func_0615B8(char *record)
{
    unsigned char *flags = D_00224E58;
    if ((flags[0x44] & 8) != 0) {
        *(unsigned short *)(record + 0x102) = 0x21;
        flags[0x44] &= 0xf7;
    }
}
