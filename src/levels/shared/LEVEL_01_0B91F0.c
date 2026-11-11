/* LEVEL_01:0x0B91F0 -- returns whether the unsigned argument is above 0xF8. */
int func_0B91F0(unsigned int value)
{
    unsigned int limit = 0xF8u;
    return limit < value;
}
