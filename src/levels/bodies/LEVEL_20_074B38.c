/* LEVEL_20.REL:0x074B38: reviewed 64-byte first64 body. */
extern unsigned char D_00171F10[];

void func_074B38(int value)
{
    int rounded = (value + 0xFFF) / 0x1000;
    if (D_00171F10[0x2C48] == 0 && *(int *)(D_00171F10 + 8) < rounded)
        *(int *)(D_00171F10 + 8) = rounded;
}
