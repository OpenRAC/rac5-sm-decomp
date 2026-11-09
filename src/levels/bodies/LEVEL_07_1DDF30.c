/* LEVEL_07:0x1DDF30 -- placement copy of LEVEL_01_1D0FE0.c: rebuilds a packed status word and fills three slots, then clears two flags. */
extern int D_002AD6F4;
extern int D_0021DDD4;
extern int D_0021DD08[];
extern char D_003AE310[];
extern char D_003AE450[];
extern int func_06F2A0(int a);

void func_1DDF30(void)
{
    unsigned int i;
    int v;

    v = (D_0021DDD4 & 0xF800FFFF) | (D_002AD6F4 << 16);
    D_0021DDD4 = v;
    for (i = 0; i < 3; i++) {
        D_0021DD08[4 + i * 0x11] = func_06F2A0(D_0021DDD4);
    }
    D_003AE310[0x138] = 0;
    D_003AE450[0xD0] = 0;
}
