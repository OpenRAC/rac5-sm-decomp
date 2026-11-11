extern unsigned int D_00195084;
extern unsigned int D_00195088;
extern unsigned int D_0019508C;
extern unsigned int D_001CFEC0;

extern int GetBufferCachePtr__Fv(void);

int func_0228D8(int size)
{
    unsigned int ptr;
    unsigned int b;

    if (D_00195084 == 0) {
        b = GetBufferCachePtr__Fv();
        D_001CFEC0 = b;
        D_0019508C = b + 0x200000;
        D_00195088 = b;
    }
    ptr = D_001CFEC0;
    D_001CFEC0 = (D_001CFEC0 + size + 0xF) & 0xFFFFFFF0;
    D_00195084++;
    if (D_001CFEC0 > D_0019508C) {
        ptr = 0;
    }
    return ptr;
}
