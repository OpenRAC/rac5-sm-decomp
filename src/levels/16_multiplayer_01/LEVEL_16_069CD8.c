/* LEVEL_16:0x069CD8 -- placement copy of LEVEL_01_078D58.c: sets a status byte, clears a 256-byte buffer, and merges a halfword into a status word. */

void *memset(void *s, int c, unsigned int n);

extern unsigned char D_001A3B44;
extern unsigned int D_001A3B40;
extern unsigned int D_0024E25C;
extern unsigned char D_001EC970[];

void func_069CD8(void)
{
    D_001A3B44 = 1;
    memset(D_001EC970, 0, 256);
    D_001A3B40 = (D_001A3B40 & 0xF800FFFF) | (D_0024E25C << 16);
}
