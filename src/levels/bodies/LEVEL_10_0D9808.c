/* LEVEL_10.REL:0x0D9808: unsigned half-difference with guarded zero case. */
int func_0D9808(unsigned int a, unsigned int b)
{
    if (a >= b)
        return 0;
    /* This defensive zero guard is present in the original control flow;
       the preceding unsigned comparison makes it unreachable. */
    if (b == 0)
        return -1;
    return (b >> 1) - (a >> 1);
}
