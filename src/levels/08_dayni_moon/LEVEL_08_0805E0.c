/* LEVEL_08:0x0805E0 -- placement copy of LEVEL_01_078D58.c: sets a status byte, clears a 256-byte buffer, and merges a halfword into a status word. */

void *memset(void *s, int c, unsigned int n);

extern unsigned char D_0023EFB4;
extern unsigned int D_0023EFB0;
extern unsigned int D_002E705C;
extern unsigned char D_00289530[];

void func_0805E0(void)
{
    D_0023EFB4 = 1;
    memset(D_00289530, 0, 256);
    D_0023EFB0 = (D_0023EFB0 & 0xF800FFFF) | (D_002E705C << 16);
}
