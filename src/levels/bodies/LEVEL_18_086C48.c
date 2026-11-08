/* LEVEL_18.REL:0x086C48: reviewed 64-byte first64 body. */
extern unsigned char D_0024EA50[];

void func_086C48(int value)
{
    int rounded = (value + 0xFFF) / 0x1000;
    if (D_0024EA50[0x2C48] == 0 && *(int *)(D_0024EA50 + 8) < rounded)
        *(int *)(D_0024EA50 + 8) = rounded;
}
