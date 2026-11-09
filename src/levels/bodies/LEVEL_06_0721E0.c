/* LEVEL_06:0x0721E0 -- placement copy of LEVEL_01_078D58.c: sets a status byte, clears a 256-byte buffer, and merges a halfword into a status word. */

void *memset(void *s, int c, unsigned int n);

extern unsigned char D_001E4FF4;
extern unsigned int D_001E4FF0;
extern unsigned int D_00284B5C;
extern unsigned char D_00227020[];

void func_0721E0(void)
{
    D_001E4FF4 = 1;
    memset(D_00227020, 0, 256);
    D_001E4FF0 = (D_001E4FF0 & 0xF800FFFF) | (D_00284B5C << 16);
}
