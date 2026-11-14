/* LEVEL_19:0x152AD0 -- placement copy of LEVEL_01_141E78.c: merges the shifted global value into the upper field of the packed word. */
extern unsigned int D_001BEE24;
extern unsigned int D_0024E3DC;

void func_152AD0(void)
{
    D_001BEE24 = (D_001BEE24 & 0xF800FFFFU) | (D_0024E3DC << 16);
}
