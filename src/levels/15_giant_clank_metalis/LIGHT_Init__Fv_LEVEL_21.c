/* LEVEL_21:0x070B08 -- placement copy of LEVEL_01_08C848.c: allocates a handle, resets the shared state and clears the packed fields of the global descriptor. */
extern int func_0EEFF0(unsigned int kind, int count);
extern void func_070C00(void);

extern int D_0014AF5C;
extern char D_00188750[];

void LIGHT_Init__Fv(void)
{
    unsigned long long v;

    D_0014AF5C = func_0EEFF0(0x3A, 8);
    func_070C00();
    *(unsigned short *)(D_00188750 + 0) = 8;
    v = *(unsigned long long *)(D_00188750);
    v &= ~(0x3FFULL << 16);
    v &= ~(0x3ULL << 26);
    v &= ~(0x7ULL << 28);
    v |= 0x1ULL << 28;
    v &= ~(0x1ULL << 31);
    v &= ~(0x7FFFFFFFULL << 32);
    v &= ~(0x1ULL << 63);
    *(unsigned long long *)(D_00188750) = v;
    *(unsigned short *)(D_00188750 + 8) = 0;
    *(char *)(D_00188750 + 0xA) = 0;
    *(char *)(D_00188750 + 0xB) = 0;
    *(unsigned short *)(D_00188750 + 0xC) = 0;
    *(char *)(D_00188750 + 0xE) = 0;
    *(char *)(D_00188750 + 0xF) = 0;
}
