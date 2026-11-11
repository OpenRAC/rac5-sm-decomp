extern unsigned int D_0023F234;
extern char D_002A9400[];
void *func_097DF0(unsigned int size)
{
    unsigned int old = D_0023F234;
    unsigned int next = old + ((size + 3u) >> 2);
    if (next >= 0x4001u)
        return 0;
    D_0023F234 = next;
    return D_002A9400 + old * 4;
}