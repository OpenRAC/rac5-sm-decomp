/* LEVEL_06:0x085498 -- placement copy of LEVEL_01_08C848.c: allocates a handle, resets the shared state and clears the packed fields of the global descriptor. */
extern int func_121820(unsigned int kind, int count);
extern void func_085590(void);

extern int D_001E51DC;
extern char D_0022D490[];

void LIGHT_Init__Fv(void)
{
    unsigned long long v;

    D_001E51DC = func_121820(0x3A, 8);
    func_085590();
    *(unsigned short *)(D_0022D490 + 0) = 8;
    v = *(unsigned long long *)(D_0022D490);
    v &= ~(0x3FFULL << 16);
    v &= ~(0x3ULL << 26);
    v &= ~(0x7ULL << 28);
    v |= 0x1ULL << 28;
    v &= ~(0x1ULL << 31);
    v &= ~(0x7FFFFFFFULL << 32);
    v &= ~(0x1ULL << 63);
    *(unsigned long long *)(D_0022D490) = v;
    *(unsigned short *)(D_0022D490 + 8) = 0;
    *(char *)(D_0022D490 + 0xA) = 0;
    *(char *)(D_0022D490 + 0xB) = 0;
    *(unsigned short *)(D_0022D490 + 0xC) = 0;
    *(char *)(D_0022D490 + 0xE) = 0;
    *(char *)(D_0022D490 + 0xF) = 0;
}
