/* LEVEL_19.REL:0x0877B0: reviewed 64-byte first64 body. */
extern unsigned char D_0024E850[];

void func_0877B0(int value)
{
    int rounded = (value + 0xFFF) / 0x1000;
    if (D_0024E850[0x2C48] == 0 && *(int *)(D_0024E850 + 8) < rounded)
        *(int *)(D_0024E850 + 8) = rounded;
}
