/* LEVEL_10:0x0793F8 -- placement copy of LEVEL_01_078D58.c: sets a status byte, clears a 256-byte buffer, and merges a halfword into a status word. */

void *memset(void *s, int c, unsigned int n);

extern unsigned char D_001FF0F4;
extern unsigned int D_001FF0F0;
extern unsigned int D_002A11DC;
extern unsigned char D_002436A0[];

void func_0793F8(void)
{
    D_001FF0F4 = 1;
    memset(D_002436A0, 0, 256);
    D_001FF0F0 = (D_001FF0F0 & 0xF800FFFF) | (D_002A11DC << 16);
}
