/* LEVEL_04.REL:0x099810: reviewed 64-byte first64 body. */
extern unsigned char D_002B2A90[];

void func_099810(int value)
{
    int rounded = (value + 0xFFF) / 0x1000;
    if (D_002B2A90[0x2C48] == 0 && *(int *)(D_002B2A90 + 8) < rounded)
        *(int *)(D_002B2A90 + 8) = rounded;
}
