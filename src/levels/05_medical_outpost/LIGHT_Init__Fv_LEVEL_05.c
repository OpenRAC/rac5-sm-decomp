/* LEVEL_05:0x089F40 -- placement copy of LEVEL_01_08C848.c: allocates a handle, resets the shared state and clears the packed fields of the global descriptor. */
extern int func_126B40(unsigned int kind, int count);
extern void func_08A038(void);

extern int D_001E565C;
extern char D_0022C5D0[];

void LIGHT_Init__Fv(void)
{
    unsigned long long v;

    D_001E565C = func_126B40(0x3A, 8);
    func_08A038();
    *(unsigned short *)(D_0022C5D0 + 0) = 8;
    v = *(unsigned long long *)(D_0022C5D0);
    v &= ~(0x3FFULL << 16);
    v &= ~(0x3ULL << 26);
    v &= ~(0x7ULL << 28);
    v |= 0x1ULL << 28;
    v &= ~(0x1ULL << 31);
    v &= ~(0x7FFFFFFFULL << 32);
    v &= ~(0x1ULL << 63);
    *(unsigned long long *)(D_0022C5D0) = v;
    *(unsigned short *)(D_0022C5D0 + 8) = 0;
    *(char *)(D_0022C5D0 + 0xA) = 0;
    *(char *)(D_0022C5D0 + 0xB) = 0;
    *(unsigned short *)(D_0022C5D0 + 0xC) = 0;
    *(char *)(D_0022C5D0 + 0xE) = 0;
    *(char *)(D_0022C5D0 + 0xF) = 0;
}
