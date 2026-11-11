extern unsigned int D_001DDD7C;
extern unsigned int D_001DDD80;
extern unsigned int D_001DDD84;
extern unsigned int D_00217640;

extern int GetBufferCachePtr__Fv(void);

int func_024668(int size)
{
    unsigned int ptr;
    unsigned int b;

    if (D_001DDD7C == 0) {
        b = GetBufferCachePtr__Fv();
        D_00217640 = b;
        D_001DDD84 = b + 0x200000;
        D_001DDD80 = b;
    }
    ptr = D_00217640;
    D_00217640 = (D_00217640 + size + 0xF) & 0xFFFFFFF0;
    D_001DDD7C++;
    if (D_00217640 > D_001DDD84) {
        ptr = 0;
    }
    return ptr;
}
