extern unsigned int D_001C6FF4;
extern char D_00226040[];
void *func_088CD0(unsigned int size)
{
    unsigned int old = D_001C6FF4;
    unsigned int next = old + ((size + 3u) >> 2);
    if (next >= 0x4001u)
        return 0;
    D_001C6FF4 = next;
    return D_00226040 + old * 4;
}