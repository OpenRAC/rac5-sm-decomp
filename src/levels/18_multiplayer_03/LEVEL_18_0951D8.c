/* LEVEL_18:0x0951D8 -- placement copy of LEVEL_16_0961C8.c: tests one bit of a packed map byte after a helper check and two range checks. */
extern long long func_094940(void);

int func_0951D8(unsigned short x, unsigned short y)
{
    int bit;
    int mask;

    if (!func_094940() || x > 0x200 || y > 0x200)
        return 0;
    y <<= 6;
    bit = ~x & 7;
    x >>= 3;
    mask = (1 << bit) & 0xFF;
    return (*(unsigned char *)(y + x) & mask) >> bit;
}
