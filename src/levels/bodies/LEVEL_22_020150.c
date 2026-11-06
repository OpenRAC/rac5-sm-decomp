extern unsigned int D_001532FC;
extern unsigned int D_00153300;
extern unsigned int D_00153304;
extern unsigned int D_00181AC0;

extern int GetBufferCachePtr__Fv(void);

int func_020150(int size)
{
    unsigned int ptr;
    unsigned int b;

    if (D_001532FC == 0) {
        b = GetBufferCachePtr__Fv();
        D_00181AC0 = b;
        D_00153304 = b + 0x200000;
        D_00153300 = b;
    }
    ptr = D_00181AC0;
    D_00181AC0 = (D_00181AC0 + size + 0xF) & 0xFFFFFFF0;
    D_001532FC++;
    if (D_00181AC0 > D_00153304) {
        ptr = 0;
    }
    return ptr;
}
