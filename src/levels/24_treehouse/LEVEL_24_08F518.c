/* LEVEL_24.REL:0x08F518: reviewed 64-byte first64 body. */
extern unsigned char D_00264150[];

void func_08F518(int value)
{
    int rounded = (value + 0xFFF) / 0x1000;
    if (D_00264150[0x2C48] == 0 && *(int *)(D_00264150 + 8) < rounded)
        *(int *)(D_00264150 + 8) = rounded;
}
