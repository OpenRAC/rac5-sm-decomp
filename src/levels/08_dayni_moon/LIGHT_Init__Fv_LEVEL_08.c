/* LEVEL_08:0x094768 -- placement copy of LEVEL_01_08C848.c: allocates a handle, resets the shared state and clears the packed fields of the global descriptor. */
extern int func_13C700(unsigned int kind, int count);
extern void func_094860(void);

extern int D_0023F19C;
extern char D_0028F990[];

void LIGHT_Init__Fv(void)
{
    unsigned long long v;

    D_0023F19C = func_13C700(0x3A, 8);
    func_094860();
    *(unsigned short *)(D_0028F990 + 0) = 8;
    v = *(unsigned long long *)(D_0028F990);
    v &= ~(0x3FFULL << 16);
    v &= ~(0x3ULL << 26);
    v &= ~(0x7ULL << 28);
    v |= 0x1ULL << 28;
    v &= ~(0x1ULL << 31);
    v &= ~(0x7FFFFFFFULL << 32);
    v &= ~(0x1ULL << 63);
    *(unsigned long long *)(D_0028F990) = v;
    *(unsigned short *)(D_0028F990 + 8) = 0;
    *(char *)(D_0028F990 + 0xA) = 0;
    *(char *)(D_0028F990 + 0xB) = 0;
    *(unsigned short *)(D_0028F990 + 0xC) = 0;
    *(char *)(D_0028F990 + 0xE) = 0;
    *(char *)(D_0028F990 + 0xF) = 0;
}
