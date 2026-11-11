/* LEVEL_09:0x160368 -- placement copy of LEVEL_07_174AE8.c: merges a 16-bit field into a packed global word, stores the helper result and looks up one fixed key. */
extern int D_001F12D4;
extern int D_0027F604;
extern int D_001F12A0;
extern int D_001F12D8;
extern int func_06B020(int arg);
extern int func_123000(unsigned int value);

void func_160368(void)
{
    D_001F12D4 = (D_001F12D4 & 0xF800FFFF) | (D_0027F604 << 16);
    D_001F12A0 = func_06B020(D_001F12D4);
    D_001F12D8 = func_123000(0x191c0c76u);
}
