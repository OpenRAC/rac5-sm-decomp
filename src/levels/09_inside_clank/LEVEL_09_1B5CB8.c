/* LEVEL_09:0x1B5CB8 -- placement copy of LEVEL_07_1DBD08.c: merges a 16-bit field into a packed global word, then stores the helper result twice. */
extern int D_001F2C94;
extern int D_0027F574;
extern int D_001F2C60;
extern int D_001F2C18;
int func_06B020(int arg);

void func_1B5CB8(void)
{
    int v;

    D_001F2C94 = (D_001F2C94 & 0xF800FFFF) | (D_0027F574 << 16);
    v = func_06B020(D_001F2C94);
    D_001F2C60 = v;
    D_001F2C18 = v;
}
