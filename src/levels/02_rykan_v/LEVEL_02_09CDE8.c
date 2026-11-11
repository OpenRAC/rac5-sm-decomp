/* LEVEL_02.REL:0x09CDE8: reviewed 64-byte first64 body. */
extern unsigned char D_002AF790[];

void func_09CDE8(int value)
{
    int rounded = (value + 0xFFF) / 0x1000;
    if (D_002AF790[0x2C48] == 0 && *(int *)(D_002AF790 + 8) < rounded)
        *(int *)(D_002AF790 + 8) = rounded;
}
