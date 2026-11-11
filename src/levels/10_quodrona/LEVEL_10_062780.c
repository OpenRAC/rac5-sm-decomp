extern unsigned char D_00242558[];

void func_062780(char *record)
{
    unsigned char *flags = D_00242558;
    if ((flags[0x44] & 8) != 0) {
        *(unsigned short *)(record + 0x102) = 0x21;
        flags[0x44] &= 0xf7;
    }
}
