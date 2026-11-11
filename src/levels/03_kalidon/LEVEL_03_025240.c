extern unsigned int D_0020C5FC;
extern unsigned int D_0020C600;
extern unsigned int D_0020C604;
extern unsigned int D_0024AD40;

extern int GetBufferCachePtr__Fv(void);

int func_025240(int size)
{
    unsigned int ptr;
    unsigned int b;

    if (D_0020C5FC == 0) {
        b = GetBufferCachePtr__Fv();
        D_0024AD40 = b;
        D_0020C604 = b + 0x200000;
        D_0020C600 = b;
    }
    ptr = D_0024AD40;
    D_0024AD40 = (D_0024AD40 + size + 0xF) & 0xFFFFFFF0;
    D_0020C5FC++;
    if (D_0024AD40 > D_0020C604) {
        ptr = 0;
    }
    return ptr;
}
