/* LEVEL_01.REL:0x08C848, bounded 192-byte candidate.
 * Isolated pinned C object: 196 bytes; first linked
 * difference at body byte +77. Not linked into the accepted
 * gate or counted.
 * Reopen: Recheck the measured register or order difference.
 */
extern int func_12B1C8(int a, int b);
extern void func_08C940(void);

extern int D_001F62DC;
extern char D_00240710[];

void func_0008C848(void)
{
    unsigned long long v;

    D_001F62DC = func_12B1C8(0x3a, 8);
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
