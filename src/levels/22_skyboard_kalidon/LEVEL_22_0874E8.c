/* LEVEL_22.REL:0x0874E8: reviewed 64-byte first64 body. */
extern unsigned char D_001EDE50[];

void func_0874E8(int value)
{
    int rounded = (value + 0xFFF) / 0x1000;
    if (D_001EDE50[0x2C48] == 0 && *(int *)(D_001EDE50 + 8) < rounded)
        *(int *)(D_001EDE50 + 8) = rounded;
}
