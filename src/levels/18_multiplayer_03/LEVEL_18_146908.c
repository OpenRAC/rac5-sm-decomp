/* LEVEL_18:0x146908 -- placement copy of LEVEL_07_174AE8.c: merges a 16-bit field into a packed global word, stores the helper result and looks up one fixed key. */
extern int D_001BEE64;
extern int D_0024E684;
extern int D_001BEE30;
extern int D_001BEE68;
extern int func_05D918(int arg);
extern int func_105B48(unsigned int value);

void func_146908(void)
{
    D_001BEE64 = (D_001BEE64 & 0xF800FFFF) | (D_0024E684 << 16);
    D_001BEE30 = func_05D918(D_001BEE64);
    D_001BEE68 = func_105B48(0x191c0c76u);
}
