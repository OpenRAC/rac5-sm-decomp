/* LEVEL_01:0x078D58 -- sets a status byte, clears a 256-byte buffer, and merges a halfword into a status word. */

void *memset(void *s, int c, unsigned int n);

extern unsigned char D_001F60F4;
extern unsigned int D_001F60F0;
extern unsigned int D_00297DDC;
extern unsigned char D_0023A2A0[];

void func_078D58(void)
{
    D_001F60F4 = 1;
    memset(D_0023A2A0, 0, 256);
    D_001F60F0 = (D_001F60F0 & 0xF800FFFF) | (D_00297DDC << 16);
}
