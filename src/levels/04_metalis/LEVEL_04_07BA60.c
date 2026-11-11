/* LEVEL_04:0x07BA60 -- placement copy of LEVEL_01_078D58.c: sets a status byte, clears a 256-byte buffer, and merges a halfword into a status word. */

void *memset(void *s, int c, unsigned int n);

extern unsigned char D_0020F5B4;
extern unsigned int D_0020F5B0;
extern unsigned int D_002B25DC;
extern unsigned char D_00254AB0[];

void func_07BA60(void)
{
    D_0020F5B4 = 1;
    memset(D_00254AB0, 0, 256);
    D_0020F5B0 = (D_0020F5B0 & 0xF800FFFF) | (D_002B25DC << 16);
}
