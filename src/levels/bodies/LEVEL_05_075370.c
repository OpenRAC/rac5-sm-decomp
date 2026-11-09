/* LEVEL_05:0x075370 -- placement copy of LEVEL_01_078D58.c: sets a status byte, clears a 256-byte buffer, and merges a halfword into a status word. */

void *memset(void *s, int c, unsigned int n);

extern unsigned char D_001E5474;
extern unsigned int D_001E5470;
extern unsigned int D_00283C9C;
extern unsigned char D_00225FA0[];

void func_075370(void)
{
    D_001E5474 = 1;
    memset(D_00225FA0, 0, 256);
    D_001E5470 = (D_001E5470 & 0xF800FFFF) | (D_00283C9C << 16);
}
