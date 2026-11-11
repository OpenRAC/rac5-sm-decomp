/* LEVEL_09:0x075860 -- placement copy of LEVEL_01_078D58.c: sets a status byte, clears a 256-byte buffer, and merges a halfword into a status word. */

void *memset(void *s, int c, unsigned int n);

extern unsigned char D_001DFEF4;
extern unsigned int D_001DFEF0;
extern unsigned int D_0027F55C;
extern unsigned char D_00221A20[];

void func_075860(void)
{
    D_001DFEF4 = 1;
    memset(D_00221A20, 0, 256);
    D_001DFEF0 = (D_001DFEF0 & 0xF800FFFF) | (D_0027F55C << 16);
}
