extern unsigned int D_001F6374;
extern char D_0025A180[];
void *func_08FED0(unsigned int size)
{
    unsigned int old = D_001F6374;
    unsigned int next = old + ((size + 3u) >> 2);
    if (next >= 0x4001u)
        return 0;
    D_001F6374 = next;
    return D_0025A180 + old * 4;
}