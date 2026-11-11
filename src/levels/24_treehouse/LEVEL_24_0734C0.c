/* LEVEL_24:0x0734C0 -- placement copy of LEVEL_01_078D58.c: sets a status byte, clears a 256-byte buffer, and merges a halfword into a status word. */

void *memset(void *s, int c, unsigned int n);

extern unsigned char D_001C6D74;
extern unsigned int D_001C6D70;
extern unsigned int D_00263C9C;
extern unsigned char D_002061A0[];

void func_0734C0(void)
{
    D_001C6D74 = 1;
    memset(D_002061A0, 0, 256);
    D_001C6D70 = (D_001C6D70 & 0xF800FFFF) | (D_00263C9C << 16);
}
