extern unsigned int D_00148BFC;
extern unsigned int D_00148C00;
extern unsigned int D_00148C04;
extern unsigned int D_00178040;

extern int GetBufferCachePtr__Fv(void);

int func_01F680(int size)
{
    unsigned int ptr;
    unsigned int b;

    if (D_00148BFC == 0) {
        b = GetBufferCachePtr__Fv();
        D_00178040 = b;
        D_00148C04 = b + 0x200000;
        D_00148C00 = b;
    }
    ptr = D_00178040;
    D_00178040 = (D_00178040 + size + 0xF) & 0xFFFFFFF0;
    D_00148BFC++;
    if (D_00178040 > D_00148C04) {
        ptr = 0;
    }
    return ptr;
}
