extern unsigned int D_0023CAFC;
extern unsigned int D_0023CB00;
extern unsigned int D_0023CB04;
extern unsigned int D_0027F140;

extern int GetBufferCachePtr__Fv(void);

int func_025BF0(int size)
{
    unsigned int ptr;
    unsigned int b;

    if (D_0023CAFC == 0) {
        b = GetBufferCachePtr__Fv();
        D_0027F140 = b;
        D_0023CB04 = b + 0x200000;
        D_0023CB00 = b;
    }
    ptr = D_0027F140;
    D_0027F140 = (D_0027F140 + size + 0xF) & 0xFFFFFFF0;
    D_0023CAFC++;
    if (D_0027F140 > D_0023CB04) {
        ptr = 0;
    }
    return ptr;
}
