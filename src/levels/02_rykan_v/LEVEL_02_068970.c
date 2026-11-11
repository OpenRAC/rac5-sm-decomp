extern unsigned char D_00250668[];

void func_068970(char *record)
{
    unsigned char *flags = D_00250668;
    if ((flags[0x44] & 8) != 0) {
        *(unsigned short *)(record + 0x102) = 0x21;
        flags[0x44] &= 0xf7;
    }
}
