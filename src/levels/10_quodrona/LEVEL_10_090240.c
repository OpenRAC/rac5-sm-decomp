extern unsigned int D_001FF374;
extern char D_00263580[];
void *func_090240(unsigned int size)
{
    unsigned int old = D_001FF374;
    unsigned int next = old + ((size + 3u) >> 2);
    if (next >= 0x4001u)
        return 0;
    D_001FF374 = next;
    return D_00263580 + old * 4;
}