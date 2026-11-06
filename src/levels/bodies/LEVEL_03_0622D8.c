extern unsigned char D_00253FD8[];

void func_0622D8(char *record)
{
    unsigned char *flags = D_00253FD8;
    if ((flags[0x44] & 8) != 0) {
        *(unsigned short *)(record + 0x102) = 0x21;
        flags[0x44] &= 0xf7;
    }
}
