extern unsigned char D_0024EA58[];

void func_064658(char *record)
{
    unsigned char *flags = D_0024EA58;
    if ((flags[0x44] & 8) != 0) {
        *(unsigned short *)(record + 0x102) = 0x21;
        flags[0x44] &= 0xf7;
    }
}
