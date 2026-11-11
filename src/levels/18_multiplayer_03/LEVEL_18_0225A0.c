extern unsigned int D_001A2F04;
extern unsigned int D_001A2F08;
extern unsigned int D_001A2F0C;
extern unsigned int D_001DEF40;

extern int GetBufferCachePtr__Fv(void);

int func_0225A0(int size)
{
    unsigned int ptr;
    unsigned int b;

    if (D_001A2F04 == 0) {
        b = GetBufferCachePtr__Fv();
        D_001DEF40 = b;
        D_001A2F0C = b + 0x200000;
        D_001A2F08 = b;
    }
    ptr = D_001DEF40;
    D_001DEF40 = (D_001DEF40 + size + 0xF) & 0xFFFFFFF0;
    D_001A2F04++;
    if (D_001DEF40 > D_001A2F0C) {
        ptr = 0;
    }
    return ptr;
}
