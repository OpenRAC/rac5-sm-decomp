/* LEVEL_15.REL:0x07A5D8: reviewed 64-byte first64 body. */
extern unsigned char D_001B02D0[];

void func_07A5D8(int value)
{
    int rounded = (value + 0xFFF) / 0x1000;
    if (D_001B02D0[0x2C48] == 0 && *(int *)(D_001B02D0 + 8) < rounded)
        *(int *)(D_001B02D0 + 8) = rounded;
}
