/* LEVEL_23:0x1A2978 -- placement copy of LEVEL_01_1D0FE0.c: rebuilds a packed status word and fills three slots, then clears two flags. */
extern int D_00269234;
extern int D_001DC37C;
extern int D_001DC2B0[];
extern char D_00366720[];
extern char D_00366860[];
extern int func_067BC8(int a);

void func_1A2978(void)
{
    unsigned int i;
    int v;

    v = (D_001DC37C & 0xF800FFFF) | (D_00269234 << 16);
    D_001DC37C = v;
    for (i = 0; i < 3; i++) {
        D_001DC2B0[4 + i * 0x11] = func_067BC8(D_001DC37C);
    }
    D_00366720[0x138] = 0;
    D_00366860[0xD0] = 0;
}
