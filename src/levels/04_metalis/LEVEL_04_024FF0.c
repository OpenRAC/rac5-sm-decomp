extern unsigned int D_0020D0FC;
extern unsigned int D_0020D100;
extern unsigned int D_0020D104;
extern unsigned int D_0024A6C0;

extern int GetBufferCachePtr__Fv(void);

int func_024FF0(int size)
{
    unsigned int ptr;
    unsigned int b;

    if (D_0020D0FC == 0) {
        b = GetBufferCachePtr__Fv();
        D_0024A6C0 = b;
        D_0020D104 = b + 0x200000;
        D_0020D100 = b;
    }
    ptr = D_0024A6C0;
    D_0024A6C0 = (D_0024A6C0 + size + 0xF) & 0xFFFFFFF0;
    D_0020D0FC++;
    if (D_0024A6C0 > D_0020D104) {
        ptr = 0;
    }
    return ptr;
}
