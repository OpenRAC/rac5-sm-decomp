extern unsigned int D_00104164;
extern unsigned int D_00104168;
extern unsigned int D_0010416C;
extern unsigned int D_00136540;

extern int GetBufferCachePtr__Fv(void);

int func_01FC00(int size)
{
    unsigned int ptr;
    unsigned int b;

    if (D_00104164 == 0) {
        b = GetBufferCachePtr__Fv();
        D_00136540 = b;
        D_0010416C = b + 0x200000;
        D_00104168 = b;
    }
    ptr = D_00136540;
    D_00136540 = (D_00136540 + size + 0xF) & 0xFFFFFFF0;
    D_00104164++;
    if (D_00136540 > D_0010416C) {
        ptr = 0;
    }
    return ptr;
}
