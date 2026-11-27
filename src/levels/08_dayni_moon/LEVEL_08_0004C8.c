/* LEVEL_08:0x0004C8 -- placement copy of LEVEL_01_0004C8.c: sets one bit of a flag byte in the shared table (flag index in the first argument, bit number in the second). */
extern unsigned char *D_0023CB2C;

static __inline__ void SetBit_0004C8(unsigned char *p, int bit)
{
    *p |= 1 << bit;
}

void func_0004C8(int index, int bit)
{
    SetBit_0004C8(&D_0023CB2C[index + 0x859], bit);
}
