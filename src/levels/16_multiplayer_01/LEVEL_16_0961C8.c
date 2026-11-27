/* LEVEL_16:0x0961C8 -- tests one bit of a packed map byte after a helper check and two range checks. */
extern long long func_095930(void);

int func_0961C8(unsigned short x, unsigned short y)
{
    int bit;
    int mask;

    if (!func_095930() || x > 0x200 || y > 0x200)
        return 0;
    y <<= 6;
    bit = ~x & 7;
    x >>= 3;
    mask = (1 << bit) & 0xFF;
    return (*(unsigned char *)(y + x) & mask) >> bit;
}
