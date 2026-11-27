/* LEVEL_22:0x000360 -- placement copy of LEVEL_01_0004C8.c: sets one bit of a flag byte in the shared table (flag index in the first argument, bit number in the second). */
extern unsigned char *D_0015332C;

static __inline__ void SetBit_0004C8(unsigned char *p, int bit)
{
    *p |= 1 << bit;
}

void func_000360(int index, int bit)
{
    SetBit_0004C8(&D_0015332C[index + 0x859], bit);
}
