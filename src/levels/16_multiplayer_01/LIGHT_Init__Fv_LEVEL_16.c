/* LEVEL_16:0x07DA58 -- placement copy of LEVEL_01_08C848.c: allocates a handle, resets the shared state and clears the packed fields of the global descriptor. */
extern int func_108008(unsigned int kind, int count);
extern void func_07DB50(void);

extern int D_001A430C;
extern char D_001F6B90[];

void LIGHT_Init__Fv(void)
{
    unsigned long long v;

    D_001A430C = func_108008(0x3A, 8);
    func_07DB50();
    *(unsigned short *)(D_001F6B90 + 0) = 8;
    v = *(unsigned long long *)(D_001F6B90);
    v &= ~(0x3FFULL << 16);
    v &= ~(0x3ULL << 26);
    v &= ~(0x7ULL << 28);
    v |= 0x1ULL << 28;
    v &= ~(0x1ULL << 31);
    v &= ~(0x7FFFFFFFULL << 32);
    v &= ~(0x1ULL << 63);
    *(unsigned long long *)(D_001F6B90) = v;
    *(unsigned short *)(D_001F6B90 + 8) = 0;
    *(char *)(D_001F6B90 + 0xA) = 0;
    *(char *)(D_001F6B90 + 0xB) = 0;
    *(unsigned short *)(D_001F6B90 + 0xC) = 0;
    *(char *)(D_001F6B90 + 0xE) = 0;
    *(char *)(D_001F6B90 + 0xF) = 0;
}
