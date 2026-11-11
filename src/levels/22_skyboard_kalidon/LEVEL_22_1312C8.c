/* LEVEL_22:0x1312C8 -- returns one bit of the low byte of the argument. */
extern int D_001668B0;
extern int func_105888(void);

int func_1312C8(unsigned int value)
{
    int masked = value & 0xff;
    int shift = D_001668B0;
    if (shift >= 0)
        return (masked >> shift) & 1;
    return (masked >> func_105888()) & 1;
}
