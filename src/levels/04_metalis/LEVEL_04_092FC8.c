extern unsigned int D_0020F834;
extern char D_00274980[];
void *func_092FC8(unsigned int size)
{
    unsigned int old = D_0020F834;
    unsigned int next = old + ((size + 3u) >> 2);
    if (next >= 0x4001u)
        return 0;
    D_0020F834 = next;
    return D_00274980 + old * 4;
}