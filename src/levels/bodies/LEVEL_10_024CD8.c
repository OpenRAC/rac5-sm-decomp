extern unsigned int D_001FCF7C;
extern unsigned int D_001FCF80;
extern unsigned int D_001FCF84;
extern unsigned int D_002392C0;

extern int GetBufferCachePtr__Fv(void);

int func_024CD8(int size)
{
    unsigned int ptr;
    unsigned int b;

    if (D_001FCF7C == 0) {
        b = GetBufferCachePtr__Fv();
        D_002392C0 = b;
        D_001FCF84 = b + 0x200000;
        D_001FCF80 = b;
    }
    ptr = D_002392C0;
    D_002392C0 = (D_002392C0 + size + 0xF) & 0xFFFFFFF0;
    D_001FCF7C++;
    if (D_002392C0 > D_001FCF84) {
        ptr = 0;
    }
    return ptr;
}
