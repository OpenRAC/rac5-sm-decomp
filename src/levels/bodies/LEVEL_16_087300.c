/* LEVEL_16.REL:0x087300: reviewed 64-byte first64 body. */
extern unsigned char D_0024E6D0[];

void func_087300(int value)
{
    int rounded = (value + 0xFFF) / 0x1000;
    if (D_0024E6D0[0x2C48] == 0 && *(int *)(D_0024E6D0 + 8) < rounded)
        *(int *)(D_0024E6D0 + 8) = rounded;
}
