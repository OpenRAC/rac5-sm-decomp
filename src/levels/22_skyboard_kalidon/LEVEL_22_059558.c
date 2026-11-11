extern unsigned char D_0018AD58[];

void func_059558(char *record)
{
    unsigned char *flags = D_0018AD58;
    if ((flags[0x44] & 8) != 0) {
        *(unsigned short *)(record + 0x102) = 0x21;
        flags[0x44] &= 0xf7;
    }
}
