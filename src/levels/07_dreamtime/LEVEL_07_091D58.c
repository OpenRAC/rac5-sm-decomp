extern unsigned int D_0020A674;
extern char D_0026FA80[];
void *func_091D58(unsigned int size)
{
    unsigned int old = D_0020A674;
    unsigned int next = old + ((size + 3u) >> 2);
    if (next >= 0x4001u)
        return 0;
    D_0020A674 = next;
    return D_0026FA80 + old * 4;
}