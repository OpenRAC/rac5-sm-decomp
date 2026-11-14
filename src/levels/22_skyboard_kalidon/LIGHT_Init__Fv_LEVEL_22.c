/* LEVEL_22:0x07D858 -- placement copy of LEVEL_01_08C848.c: allocates a handle, resets the shared state and clears the packed fields of the global descriptor. */
extern int func_101DB8(unsigned int kind, int count);
extern void func_07D950(void);

extern int D_0015565C;
extern char D_001962D0[];

void LIGHT_Init__Fv(void)
{
    unsigned long long v;

    D_0015565C = func_101DB8(0x3A, 8);
    func_07D950();
    *(unsigned short *)(D_001962D0 + 0) = 8;
    v = *(unsigned long long *)(D_001962D0);
    v &= ~(0x3FFULL << 16);
    v &= ~(0x3ULL << 26);
    v &= ~(0x7ULL << 28);
    v |= 0x1ULL << 28;
    v &= ~(0x1ULL << 31);
    v &= ~(0x7FFFFFFFULL << 32);
    v &= ~(0x1ULL << 63);
    *(unsigned long long *)(D_001962D0) = v;
    *(unsigned short *)(D_001962D0 + 8) = 0;
    *(char *)(D_001962D0 + 0xA) = 0;
    *(char *)(D_001962D0 + 0xB) = 0;
    *(unsigned short *)(D_001962D0 + 0xC) = 0;
    *(char *)(D_001962D0 + 0xE) = 0;
    *(char *)(D_001962D0 + 0xF) = 0;
}
