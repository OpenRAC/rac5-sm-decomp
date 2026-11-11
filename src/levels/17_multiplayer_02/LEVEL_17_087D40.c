/* LEVEL_17.REL:0x087D40: reviewed 64-byte first64 body. */
extern unsigned char D_0023F9D0[];

void func_087D40(int value)
{
    int rounded = (value + 0xFFF) / 0x1000;
    if (D_0023F9D0[0x2C48] == 0 && *(int *)(D_0023F9D0 + 8) < rounded)
        *(int *)(D_0023F9D0 + 8) = rounded;
}
