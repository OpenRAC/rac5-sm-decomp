extern unsigned int D_001C4BFC;
extern unsigned int D_001C4C00;
extern unsigned int D_001C4C04;
extern unsigned int D_001FBDC0;

extern int GetBufferCachePtr__Fv(void);

int func_0230F0(int size)
{
    unsigned int ptr;
    unsigned int b;

    if (D_001C4BFC == 0) {
        b = GetBufferCachePtr__Fv();
        D_001FBDC0 = b;
        D_001C4C04 = b + 0x200000;
        D_001C4C00 = b;
    }
    ptr = D_001FBDC0;
    D_001FBDC0 = (D_001FBDC0 + size + 0xF) & 0xFFFFFFF0;
    D_001C4BFC++;
    if (D_001FBDC0 > D_001C4C04) {
        ptr = 0;
    }
    return ptr;
}
