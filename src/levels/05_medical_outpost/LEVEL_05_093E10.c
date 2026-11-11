/* LEVEL_05.REL:0x093E10: reviewed 64-byte first64 body. */
extern unsigned char D_00284150[];

void func_093E10(int value)
{
    int rounded = (value + 0xFFF) / 0x1000;
    if (D_00284150[0x2C48] == 0 && *(int *)(D_00284150 + 8) < rounded)
        *(int *)(D_00284150 + 8) = rounded;
}
