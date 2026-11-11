/* LEVEL_01:0x06DDE8 -- returns the byte remainder of a difference from a fixed offset of twelve. */
unsigned int func_06DDE8(unsigned int a0, unsigned int a1)
{
    int previous = (a1 & 0xFF) - 12;
    int current = a0 & 0xFF;
    return ((current - previous) % 12) & 0xFF;
}
