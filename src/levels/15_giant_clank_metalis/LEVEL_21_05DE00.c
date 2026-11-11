/* LEVEL_21:0x05DE00 -- placement copy of LEVEL_01_078D58.c: sets a status byte, clears a 256-byte buffer, and merges a halfword into a status word. */

void *memset(void *s, int c, unsigned int n);

extern unsigned char D_0014AD74;
extern unsigned int D_0014AD70;
extern unsigned int D_001AFE1C;
extern unsigned char D_00182308[];

void func_05DE00(void)
{
    D_0014AD74 = 1;
    memset(D_00182308, 0, 256);
    D_0014AD70 = (D_0014AD70 & 0xF800FFFF) | (D_001AFE1C << 16);
}
