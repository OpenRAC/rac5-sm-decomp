extern unsigned int D_001A5824;
extern char D_00210980[];
void *func_080A70(unsigned int size)
{
    unsigned int old = D_001A5824;
    unsigned int next = old + ((size + 3u) >> 2);
    if (next >= 0x4001u)
        return 0;
    D_001A5824 = next;
    return D_00210980 + old * 4;
}