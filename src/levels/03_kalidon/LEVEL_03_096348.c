/* LEVEL_03.REL:0x096348: reviewed 64-byte first64 body. */
extern unsigned char D_002B3110[];

void func_096348(int value)
{
    int rounded = (value + 0xFFF) / 0x1000;
    if (D_002B3110[0x2C48] == 0 && *(int *)(D_002B3110 + 8) < rounded)
        *(int *)(D_002B3110 + 8) = rounded;
}
