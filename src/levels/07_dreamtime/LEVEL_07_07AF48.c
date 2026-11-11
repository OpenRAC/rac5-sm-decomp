/* LEVEL_07:0x07AF48 -- placement copy of LEVEL_01_078D58.c: sets a status byte, clears a 256-byte buffer, and merges a halfword into a status word. */

void *memset(void *s, int c, unsigned int n);

extern unsigned char D_0020A3F4;
extern unsigned int D_0020A3F0;
extern unsigned int D_002AD6DC;
extern unsigned char D_0024FBA0[];

void func_07AF48(void)
{
    D_0020A3F4 = 1;
    memset(D_0024FBA0, 0, 256);
    D_0020A3F0 = (D_0020A3F0 & 0xF800FFFF) | (D_002AD6DC << 16);
}
