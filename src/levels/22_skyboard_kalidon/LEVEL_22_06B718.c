/* LEVEL_22:0x06B718 -- placement copy of LEVEL_01_078D58.c: sets a status byte, clears a 256-byte buffer, and merges a halfword into a status word. */

void *memset(void *s, int c, unsigned int n);

extern unsigned char D_00155474;
extern unsigned int D_00155470;
extern unsigned int D_001ED99C;
extern unsigned char D_0018BEA0[];

void func_06B718(void)
{
    D_00155474 = 1;
    memset(D_0018BEA0, 0, 256);
    D_00155470 = (D_00155470 & 0xF800FFFF) | (D_001ED99C << 16);
}
