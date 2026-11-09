/* LEVEL_03:0x078B50 -- placement copy of LEVEL_01_078D58.c: sets a status byte, clears a 256-byte buffer, and merges a halfword into a status word. */

void *memset(void *s, int c, unsigned int n);

extern unsigned char D_0020E774;
extern unsigned int D_0020E770;
extern unsigned int D_002B2C5C;
extern unsigned char D_00255120[];

void func_078B50(void)
{
    D_0020E774 = 1;
    memset(D_00255120, 0, 256);
    D_0020E770 = (D_0020E770 & 0xF800FFFF) | (D_002B2C5C << 16);
}
