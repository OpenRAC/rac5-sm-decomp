/* LEVEL_07:0x08E6D0 -- placement copy of LEVEL_01_08C848.c: allocates a handle, resets the shared state and clears the packed fields of the global descriptor. */
extern int func_12E1C8(unsigned int kind, int count);
extern void func_08E7C8(void);

extern int D_0020A5DC;
extern char D_00256010[];

void LIGHT_Init__Fv(void)
{
    unsigned long long v;

    D_0020A5DC = func_12E1C8(0x3A, 8);
    func_08E7C8();
    *(unsigned short *)(D_00256010 + 0) = 8;
    v = *(unsigned long long *)(D_00256010);
    v &= ~(0x3FFULL << 16);
    v &= ~(0x3ULL << 26);
    v &= ~(0x7ULL << 28);
    v |= 0x1ULL << 28;
    v &= ~(0x1ULL << 31);
    v &= ~(0x7FFFFFFFULL << 32);
    v &= ~(0x1ULL << 63);
    *(unsigned long long *)(D_00256010) = v;
    *(unsigned short *)(D_00256010 + 8) = 0;
    *(char *)(D_00256010 + 0xA) = 0;
    *(char *)(D_00256010 + 0xB) = 0;
    *(unsigned short *)(D_00256010 + 0xC) = 0;
    *(char *)(D_00256010 + 0xE) = 0;
    *(char *)(D_00256010 + 0xF) = 0;
}
