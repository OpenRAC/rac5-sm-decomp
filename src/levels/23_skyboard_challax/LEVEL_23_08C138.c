/* LEVEL_23.REL:0x08C138: reviewed 64-byte first64 body. */
extern unsigned char D_002696D0[];

void func_08C138(int value)
{
    int rounded = (value + 0xFFF) / 0x1000;
    if (D_002696D0[0x2C48] == 0 && *(int *)(D_002696D0 + 8) < rounded)
        *(int *)(D_002696D0 + 8) = rounded;
}
