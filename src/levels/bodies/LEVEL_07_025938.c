extern unsigned int D_0020827C;
extern unsigned int D_00208280;
extern unsigned int D_00208284;
extern unsigned int D_002457C0;

extern int GetBufferCachePtr__Fv(void);

int func_025938(int size)
{
    unsigned int ptr;
    unsigned int b;

    if (D_0020827C == 0) {
        b = GetBufferCachePtr__Fv();
        D_002457C0 = b;
        D_00208284 = b + 0x200000;
        D_00208280 = b;
    }
    ptr = D_002457C0;
    D_002457C0 = (D_002457C0 + size + 0xF) & 0xFFFFFFF0;
    D_0020827C++;
    if (D_002457C0 > D_00208284) {
        ptr = 0;
    }
    return ptr;
}
