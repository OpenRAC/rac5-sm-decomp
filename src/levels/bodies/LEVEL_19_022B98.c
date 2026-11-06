extern unsigned int D_001A2C04;
extern unsigned int D_001A2C08;
extern unsigned int D_001A2C0C;
extern unsigned int D_001DED40;

extern int GetBufferCachePtr__Fv(void);

int func_022B98(int size)
{
    unsigned int ptr;
    unsigned int b;

    if (D_001A2C04 == 0) {
        b = GetBufferCachePtr__Fv();
        D_001DED40 = b;
        D_001A2C0C = b + 0x200000;
        D_001A2C08 = b;
    }
    ptr = D_001DED40;
    D_001DED40 = (D_001DED40 + size + 0xF) & 0xFFFFFFF0;
    D_001A2C04++;
    if (D_001DED40 > D_001A2C0C) {
        ptr = 0;
    }
    return ptr;
}
