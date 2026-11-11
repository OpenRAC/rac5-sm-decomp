/* LEVEL_01:0x0D83C8 -- returns a scaled difference of halves, or -1 when the divisor is zero. */
int func_0D83C8(unsigned int a, unsigned int b)
{
    if (a >= b)
        return 0;
    if (!b)
        return -1;
    return (int)((b >> 1) - (a >> 1));
}
