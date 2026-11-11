extern unsigned int D_001A5524;
extern char D_00210780[];
void *func_0815D8(unsigned int size)
{
    unsigned int old = D_001A5524;
    unsigned int next = old + ((size + 3u) >> 2);
    if (next >= 0x4001u)
        return 0;
    D_001A5524 = next;
    return D_00210780 + old * 4;
}