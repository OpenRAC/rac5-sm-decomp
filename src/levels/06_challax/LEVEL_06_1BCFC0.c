/* LEVEL_06:0x1BCFC0 -- placement copy of LEVEL_01_1D0FE0.c: rebuilds a packed status word and fills three slots, then clears two flags. */
extern int D_00284B74;
extern int D_001F7FB4;
extern int D_001F7EE8[];
extern char D_00385330[];
extern char D_00385470[];
extern int func_06B1E0(int a);

void func_1BCFC0(void)
{
    unsigned int i;
    int v;

    v = (D_001F7FB4 & 0xF800FFFF) | (D_00284B74 << 16);
    D_001F7FB4 = v;
    for (i = 0; i < 3; i++) {
        D_001F7EE8[4 + i * 0x11] = func_06B1E0(D_001F7FB4);
    }
    D_00385330[0x138] = 0;
    D_00385470[0xD0] = 0;
}
