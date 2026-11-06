extern unsigned int D_001E5274;
extern char D_00246F00[];
void *func_088B20(unsigned int size)
{
    unsigned int old = D_001E5274;
    unsigned int next = old + ((size + 3u) >> 2);
    if (next >= 0x4001u)
        return 0;
    D_001E5274 = next;
    return D_00246F00 + old * 4;
}