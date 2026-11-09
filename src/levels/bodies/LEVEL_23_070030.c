/* LEVEL_23:0x070030 -- placement copy of LEVEL_01_078D58.c: sets a status byte, clears a 256-byte buffer, and merges a halfword into a status word. */

void *memset(void *s, int c, unsigned int n);

extern unsigned char D_001C94F4;
extern unsigned int D_001C94F0;
extern unsigned int D_0026921C;
extern unsigned char D_00207720[];

void func_070030(void)
{
    D_001C94F4 = 1;
    memset(D_00207720, 0, 256);
    D_001C94F0 = (D_001C94F0 & 0xF800FFFF) | (D_0026921C << 16);
}
