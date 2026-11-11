/* LEVEL_07.REL:0x0985A0: reviewed 64-byte first64 body. */
extern unsigned char D_002ADB90[];

void func_0985A0(int value)
{
    int rounded = (value + 0xFFF) / 0x1000;
    if (D_002ADB90[0x2C48] == 0 && *(int *)(D_002ADB90 + 8) < rounded)
        *(int *)(D_002ADB90 + 8) = rounded;
}
