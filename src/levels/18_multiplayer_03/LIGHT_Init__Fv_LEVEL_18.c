/* LEVEL_18:0x07D3A0 -- placement copy of LEVEL_01_08C848.c: allocates a handle, resets the shared state and clears the packed fields of the global descriptor. */
extern int func_106CB8(unsigned int kind, int count);
extern void func_07D498(void);

extern int D_001A578C;
extern char D_001F6F10[];

void LIGHT_Init__Fv(void)
{
    unsigned long long v;

    D_001A578C = func_106CB8(0x3A, 8);
    func_07D498();
    *(unsigned short *)(D_001F6F10 + 0) = 8;
    v = *(unsigned long long *)(D_001F6F10);
    v &= ~(0x3FFULL << 16);
    v &= ~(0x3ULL << 26);
    v &= ~(0x7ULL << 28);
    v |= 0x1ULL << 28;
    v &= ~(0x1ULL << 31);
    v &= ~(0x7FFFFFFFULL << 32);
    v &= ~(0x1ULL << 63);
    *(unsigned long long *)(D_001F6F10) = v;
    *(unsigned short *)(D_001F6F10 + 8) = 0;
    *(char *)(D_001F6F10 + 0xA) = 0;
    *(char *)(D_001F6F10 + 0xB) = 0;
    *(unsigned short *)(D_001F6F10 + 0xC) = 0;
    *(char *)(D_001F6F10 + 0xE) = 0;
    *(char *)(D_001F6F10 + 0xF) = 0;
}
