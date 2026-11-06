extern unsigned int D_001979A4;
extern char D_00201900[];
void *func_081B68(unsigned int size)
{
    unsigned int old = D_001979A4;
    unsigned int next = old + ((size + 3u) >> 2);
    if (next >= 0x4001u)
        return 0;
    D_001979A4 = next;
    return D_00201900 + old * 4;
}