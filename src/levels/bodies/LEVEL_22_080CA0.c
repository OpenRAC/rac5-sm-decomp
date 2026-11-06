extern unsigned int D_001556F4;
extern char D_001AFD40[];
void *func_080CA0(unsigned int size)
{
    unsigned int old = D_001556F4;
    unsigned int next = old + ((size + 3u) >> 2);
    if (next >= 0x4001u)
        return 0;
    D_001556F4 = next;
    return D_001AFD40 + old * 4;
}