extern unsigned char D_002208D8[];

void func_060550(char *record)
{
    unsigned char *flags = D_002208D8;
    if ((flags[0x44] & 8) != 0) {
        *(unsigned short *)(record + 0x102) = 0x21;
        flags[0x44] &= 0xf7;
    }
}
