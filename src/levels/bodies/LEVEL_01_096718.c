/* LEVEL_01.REL:0x096718: reviewed 64-byte first64 body. */
extern unsigned char D_00298290[];

void func_096718(int value)
{
    int rounded = (value + 0xFFF) / 0x1000;
    if (D_00298290[0x2C48] == 0 && *(int *)(D_00298290 + 8) < rounded)
        *(int *)(D_00298290 + 8) = rounded;
}
