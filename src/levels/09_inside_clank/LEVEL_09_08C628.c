extern unsigned int D_001E0174;
extern char D_00241900[];
void *func_08C628(unsigned int size)
{
    unsigned int old = D_001E0174;
    unsigned int next = old + ((size + 3u) >> 2);
    if (next >= 0x4001u)
        return 0;
    D_001E0174 = next;
    return D_00241900 + old * 4;
}