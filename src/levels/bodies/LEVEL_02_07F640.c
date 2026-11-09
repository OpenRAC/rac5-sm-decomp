/* LEVEL_02:0x07F640 -- placement copy of LEVEL_01_078D58.c: sets a status byte, clears a 256-byte buffer, and merges a halfword into a status word. */

void *memset(void *s, int c, unsigned int n);

extern unsigned char D_0020B0B4;
extern unsigned int D_0020B0B0;
extern unsigned int D_002AF2DC;
extern unsigned char D_002517B0[];

void func_07F640(void)
{
    D_0020B0B4 = 1;
    memset(D_002517B0, 0, 256);
    D_0020B0B0 = (D_0020B0B0 & 0xF800FFFF) | (D_002AF2DC << 16);
}
