/* LEVEL_23:0x0824A8 -- placement copy of LEVEL_01_08C848.c: allocates a handle, resets the shared state and clears the packed fields of the global descriptor. */
extern int func_11C040(unsigned int kind, int count);
extern void func_0825A0(void);

extern int D_001C96DC;
extern char D_00211B50[];

void LIGHT_Init__Fv(void)
{
    unsigned long long v;

    D_001C96DC = func_11C040(0x3A, 8);
    func_0825A0();
    *(unsigned short *)(D_00211B50 + 0) = 8;
    v = *(unsigned long long *)(D_00211B50);
    v &= ~(0x3FFULL << 16);
    v &= ~(0x3ULL << 26);
    v &= ~(0x7ULL << 28);
    v |= 0x1ULL << 28;
    v &= ~(0x1ULL << 31);
    v &= ~(0x7FFFFFFFULL << 32);
    v &= ~(0x1ULL << 63);
    *(unsigned long long *)(D_00211B50) = v;
    *(unsigned short *)(D_00211B50 + 8) = 0;
    *(char *)(D_00211B50 + 0xA) = 0;
    *(char *)(D_00211B50 + 0xB) = 0;
    *(unsigned short *)(D_00211B50 + 0xC) = 0;
    *(char *)(D_00211B50 + 0xE) = 0;
    *(char *)(D_00211B50 + 0xF) = 0;
}
