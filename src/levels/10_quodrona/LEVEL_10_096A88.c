/* LEVEL_10.REL:0x096A88: reviewed 64-byte first64 body. */
extern unsigned char D_002A1690[];

void func_096A88(int value)
{
    int rounded = (value + 0xFFF) / 0x1000;
    if (D_002A1690[0x2C48] == 0 && *(int *)(D_002A1690 + 8) < rounded)
        *(int *)(D_002A1690 + 8) = rounded;
}
