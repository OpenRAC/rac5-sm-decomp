extern unsigned int D_001A1A84;
extern unsigned int D_001A1A88;
extern unsigned int D_001A1A8C;
extern unsigned int D_001DEBC0;

extern int GetBufferCachePtr__Fv(void);

int func_022F58(int size)
{
    unsigned int ptr;
    unsigned int b;

    if (D_001A1A84 == 0) {
        b = GetBufferCachePtr__Fv();
        D_001DEBC0 = b;
        D_001A1A8C = b + 0x200000;
        D_001A1A88 = b;
    }
    ptr = D_001DEBC0;
    D_001DEBC0 = (D_001DEBC0 + size + 0xF) & 0xFFFFFFF0;
    D_001A1A84++;
    if (D_001DEBC0 > D_001A1A8C) {
        ptr = 0;
    }
    return ptr;
}
