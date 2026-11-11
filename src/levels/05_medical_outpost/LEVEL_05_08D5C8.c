extern unsigned int D_001E56F4;
extern char D_00246040[];
void *func_08D5C8(unsigned int size)
{
    unsigned int old = D_001E56F4;
    unsigned int next = old + ((size + 3u) >> 2);
    if (next >= 0x4001u)
        return 0;
    D_001E56F4 = next;
    return D_00246040 + old * 4;
}