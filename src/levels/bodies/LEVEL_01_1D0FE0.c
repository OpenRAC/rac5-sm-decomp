/* LEVEL_01:0x1D0FE0 -- rebuilds a packed status word and fills three slots, then clears two flags. */
extern int D_00297DF4;
extern int D_002090FC;
extern int D_00209030[];
extern char D_00398920[];
extern char D_00398A60[];
extern int func_06E420(int a);

void func_1D0FE0(void)
{
    unsigned int i;
    int v;

    v = (D_002090FC & 0xF800FFFF) | (D_00297DF4 << 16);
    D_002090FC = v;
    for (i = 0; i < 3; i++) {
        D_00209030[4 + i * 0x11] = func_06E420(D_002090FC);
    }
    D_00398920[0x138] = 0;
    D_00398A60[0xD0] = 0;
}
