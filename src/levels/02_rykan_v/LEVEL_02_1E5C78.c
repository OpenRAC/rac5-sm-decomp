/* LEVEL_02:0x1E5C78 -- placement copy of LEVEL_01_1D0FE0.c: rebuilds a packed status word and fills three slots, then clears two flags. */
extern int D_002AF2F4;
extern int D_0021E04C;
extern int D_0021DF80[];
extern char D_003B0878[];
extern char D_003B09B8[];
extern int func_0738A0(int a);

void func_1E5C78(void)
{
    unsigned int i;
    int v;

    v = (D_0021E04C & 0xF800FFFF) | (D_002AF2F4 << 16);
    D_0021E04C = v;
    for (i = 0; i < 3; i++) {
        D_0021DF80[4 + i * 0x11] = func_0738A0(D_0021E04C);
    }
    D_003B0878[0x138] = 0;
    D_003B09B8[0xD0] = 0;
}
