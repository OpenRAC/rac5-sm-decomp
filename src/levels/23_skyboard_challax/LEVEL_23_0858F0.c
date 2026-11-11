extern unsigned int D_001C9774;
extern char D_0022B5C0[];
void *func_0858F0(unsigned int size)
{
    unsigned int old = D_001C9774;
    unsigned int next = old + ((size + 3u) >> 2);
    if (next >= 0x4001u)
        return 0;
    D_001C9774 = next;
    return D_0022B5C0 + old * 4;
}