extern unsigned int D_001C737C;
extern unsigned int D_001C7380;
extern unsigned int D_001C7384;
extern unsigned int D_001FD340;

extern int GetBufferCachePtr__Fv(void);

int func_0233B8(int size)
{
    unsigned int ptr;
    unsigned int b;

    if (D_001C737C == 0) {
        b = GetBufferCachePtr__Fv();
        D_001FD340 = b;
        D_001C7384 = b + 0x200000;
        D_001C7380 = b;
    }
    ptr = D_001FD340;
    D_001FD340 = (D_001FD340 + size + 0xF) & 0xFFFFFFF0;
    D_001C737C++;
    if (D_001FD340 > D_001C7384) {
        ptr = 0;
    }
    return ptr;
}
