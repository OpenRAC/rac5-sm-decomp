extern unsigned int D_00027E0C;
extern unsigned int D_00027E10;
extern unsigned int D_00027E14;
extern unsigned int D_0010A980;

extern int GetBufferCachePtr__Fv(void);

int func_000350(int size)
{
    unsigned int ptr;
    unsigned int b;

    if (D_00027E0C == 0) {
        b = GetBufferCachePtr__Fv();
        D_0010A980 = b;
        D_00027E14 = b + 0x200000;
        D_00027E10 = b;
    }
    ptr = D_0010A980;
    D_0010A980 = (D_0010A980 + size + 0xF) & 0xFFFFFFF0;
    D_00027E0C++;
    if (D_0010A980 > D_00027E14) {
        ptr = 0;
    }
    return ptr;
}
