/* LEVEL_10:0x08CBB8 -- placement copy of LEVEL_01_08C848.c: allocates a handle, resets the shared state and clears the packed fields of the global descriptor. */
extern int func_129028(unsigned int kind, int count);
extern void func_08CCB0(void);

extern int D_001FF2DC;
extern char D_00249B10[];

void LIGHT_Init__Fv(void)
{
    unsigned long long v;

    D_001FF2DC = func_129028(0x3A, 8);
    func_08CCB0();
    *(unsigned short *)(D_00249B10 + 0) = 8;
    v = *(unsigned long long *)(D_00249B10);
    v &= ~(0x3FFULL << 16);
    v &= ~(0x3ULL << 26);
    v &= ~(0x7ULL << 28);
    v |= 0x1ULL << 28;
    v &= ~(0x1ULL << 31);
    v &= ~(0x7FFFFFFFULL << 32);
    v &= ~(0x1ULL << 63);
    *(unsigned long long *)(D_00249B10) = v;
    *(unsigned short *)(D_00249B10 + 8) = 0;
    *(char *)(D_00249B10 + 0xA) = 0;
    *(char *)(D_00249B10 + 0xB) = 0;
    *(unsigned short *)(D_00249B10 + 0xC) = 0;
    *(char *)(D_00249B10 + 0xE) = 0;
    *(char *)(D_00249B10 + 0xF) = 0;
}
