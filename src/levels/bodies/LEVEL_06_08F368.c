/* LEVEL_06.REL:0x08F368: reviewed 64-byte first64 body. */
extern unsigned char D_00285010[];

void func_08F368(int value)
{
    int rounded = (value + 0xFFF) / 0x1000;
    if (D_00285010[0x2C48] == 0 && *(int *)(D_00285010 + 8) < rounded)
        *(int *)(D_00285010 + 8) = rounded;
}
