/* LEVEL_09.REL:0x092E70: reviewed 64-byte first64 body. */
extern unsigned char D_0027FA10[];

void func_092E70(int value)
{
    int rounded = (value + 0xFFF) / 0x1000;
    if (D_0027FA10[0x2C48] == 0 && *(int *)(D_0027FA10 + 8) < rounded)
        *(int *)(D_0027FA10 + 8) = rounded;
}
