/* LEVEL_18:0x188920 -- placement copy of LEVEL_07_1DBD08.c: merges a 16-bit field into a packed global word, then stores the helper result twice. */
extern int D_001BFA0C;
extern int D_0024E5F4;
extern int D_001BF9D8;
extern int D_001BF990;
int func_05D918(int arg);

void func_188920(void)
{
    int v;

    D_001BFA0C = (D_001BFA0C & 0xF800FFFF) | (D_0024E5F4 << 16);
    v = func_05D918(D_001BFA0C);
    D_001BF9D8 = v;
    D_001BF990 = v;
}
