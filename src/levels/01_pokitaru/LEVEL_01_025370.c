extern unsigned int D_001F3F7C;
extern unsigned int D_001F3F80;
extern unsigned int D_001F3F84;
extern unsigned int D_0022FEC0;

extern int GetBufferCachePtr__Fv(void);

int func_025370(int size)
{
    unsigned int ptr;
    unsigned int b;

    if (D_001F3F7C == 0) {
        b = GetBufferCachePtr__Fv();
        D_0022FEC0 = b;
        D_001F3F84 = b + 0x200000;
        D_001F3F80 = b;
    }
    ptr = D_0022FEC0;
    D_0022FEC0 = (D_0022FEC0 + size + 0xF) & 0xFFFFFFF0;
    D_001F3F7C++;
    if (D_0022FEC0 > D_001F3F84) {
        ptr = 0;
    }
    return ptr;
}
