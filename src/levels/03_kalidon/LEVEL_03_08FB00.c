extern unsigned int D_0020E9F4;
extern char D_00275000[];
void *func_08FB00(unsigned int size)
{
    unsigned int old = D_0020E9F4;
    unsigned int next = old + ((size + 3u) >> 2);
    if (next >= 0x4001u)
        return 0;
    D_0020E9F4 = next;
    return D_00275000 + old * 4;
}