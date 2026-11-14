/* LEVEL_01:0x08C848 -- allocates a handle, resets the shared state and clears the packed fields of the global descriptor. */
extern int func_12B1C8(unsigned int kind, int count);
extern void func_08C940(void);

extern int D_001F62DC;
extern char D_00240710[];

void LIGHT_Init__Fv(void)
{
    unsigned long long v;

    D_001F62DC = func_12B1C8(0x3A, 8);
    func_08C940();
    *(unsigned short *)(D_00240710 + 0) = 8;
    v = *(unsigned long long *)(D_00240710);
    v &= ~(0x3FFULL << 16);
    v &= ~(0x3ULL << 26);
    v &= ~(0x7ULL << 28);
    v |= 0x1ULL << 28;
    v &= ~(0x1ULL << 31);
    v &= ~(0x7FFFFFFFULL << 32);
    v &= ~(0x1ULL << 63);
    *(unsigned long long *)(D_00240710) = v;
    *(unsigned short *)(D_00240710 + 8) = 0;
    *(char *)(D_00240710 + 0xA) = 0;
    *(char *)(D_00240710 + 0xB) = 0;
    *(unsigned short *)(D_00240710 + 0xC) = 0;
    *(char *)(D_00240710 + 0xE) = 0;
    *(char *)(D_00240710 + 0xF) = 0;
}
