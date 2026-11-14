/* LEVEL_19:0x095A58 -- placement copy of LEVEL_16_0961C8.c: tests one bit of a packed map byte after a helper check and two range checks. */
extern int func_0951C0(void);

int func_095A58(unsigned short x, unsigned short y)
{
    int bit;
    int mask;

    if (!func_0951C0() || x > 0x200 || y > 0x200)
        return 0;
    y <<= 6;
    bit = ~x & 7;
    x >>= 3;
    mask = (1 << bit) & 0xFF;
    return (*(unsigned char *)(y + x) & mask) >> bit;
}
