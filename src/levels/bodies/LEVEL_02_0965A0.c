extern unsigned int D_0020B334;
extern char D_00271680[];
void *func_0965A0(unsigned int size)
{
    unsigned int old = D_0020B334;
    unsigned int next = old + ((size + 3u) >> 2);
    if (next >= 0x4001u)
        return 0;
    D_0020B334 = next;
    return D_00271680 + old * 4;
}