/* LEVEL_18.REL:0x0C6A98: unsigned half-difference with guarded zero case. */
int func_0C6A98(unsigned int a, unsigned int b)
{
    if (a >= b)
        return 0;
    /* This defensive zero guard is present in the original control flow;
       the preceding unsigned comparison makes it unreachable. */
    if (b == 0)
        return -1;
    return (b >> 1) - (a >> 1);
}
