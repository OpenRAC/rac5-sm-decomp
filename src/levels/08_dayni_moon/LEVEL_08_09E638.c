/* LEVEL_08.REL:0x09E638: reviewed 64-byte first64 body. */
extern unsigned char D_002E7510[];

void func_09E638(int value)
{
    int rounded = (value + 0xFFF) / 0x1000;
    if (D_002E7510[0x2C48] == 0 && *(int *)(D_002E7510 + 8) < rounded)
        *(int *)(D_002E7510 + 8) = rounded;
}
