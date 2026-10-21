/* FRONTEND:0x01F928 -- tests one bit of the flag word. */
int func_01F928(int *p, int bit)
{
    int mask = 1 << bit;

    return (p[1] & mask) != 0;
}
