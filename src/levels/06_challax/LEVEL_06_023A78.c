extern unsigned int D_001E2E7C;
extern unsigned int D_001E2E80;
extern unsigned int D_001E2E84;
extern unsigned int D_0021CC40;

extern int GetBufferCachePtr__Fv(void);

int func_023A78(int size)
{
    unsigned int ptr;
    unsigned int b;

    if (D_001E2E7C == 0) {
        b = GetBufferCachePtr__Fv();
        D_0021CC40 = b;
        D_001E2E84 = b + 0x200000;
        D_001E2E80 = b;
    }
    ptr = D_0021CC40;
    D_0021CC40 = (D_0021CC40 + size + 0xF) & 0xFFFFFFF0;
    D_001E2E7C++;
    if (D_0021CC40 > D_001E2E84) {
        ptr = 0;
    }
    return ptr;
}
