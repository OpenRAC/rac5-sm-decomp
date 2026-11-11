extern unsigned int D_001A43A4;
extern char D_00210600[];
void *func_081128(unsigned int size)
{
    unsigned int old = D_001A43A4;
    unsigned int next = old + ((size + 3u) >> 2);
    if (next >= 0x4001u)
        return 0;
    D_001A43A4 = next;
    return D_00210600 + old * 4;
}