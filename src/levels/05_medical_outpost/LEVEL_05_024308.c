extern unsigned int D_001E32FC;
extern unsigned int D_001E3300;
extern unsigned int D_001E3304;
extern unsigned int D_0021BBC0;

extern int GetBufferCachePtr__Fv(void);

int func_024308(int size)
{
    unsigned int ptr;
    unsigned int b;

    if (D_001E32FC == 0) {
        b = GetBufferCachePtr__Fv();
        D_0021BBC0 = b;
        D_001E3304 = b + 0x200000;
        D_001E3300 = b;
    }
    ptr = D_0021BBC0;
    D_0021BBC0 = (D_0021BBC0 + size + 0xF) & 0xFFFFFFF0;
    D_001E32FC++;
    if (D_0021BBC0 > D_001E3304) {
        ptr = 0;
    }
    return ptr;
}
