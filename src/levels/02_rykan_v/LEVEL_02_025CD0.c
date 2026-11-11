extern unsigned int D_00208BFC;
extern unsigned int D_00208C00;
extern unsigned int D_00208C04;
extern unsigned int D_002473C0;

extern int GetBufferCachePtr__Fv(void);

int func_025CD0(int size)
{
    unsigned int ptr;
    unsigned int b;

    if (D_00208BFC == 0) {
        b = GetBufferCachePtr__Fv();
        D_002473C0 = b;
        D_00208C04 = b + 0x200000;
        D_00208C00 = b;
    }
    ptr = D_002473C0;
    D_002473C0 = (D_002473C0 + size + 0xF) & 0xFFFFFFF0;
    D_00208BFC++;
    if (D_002473C0 > D_00208C04) {
        ptr = 0;
    }
    return ptr;
}
